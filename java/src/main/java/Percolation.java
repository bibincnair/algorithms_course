
import edu.princeton.cs.algs4.StdOut;
import edu.princeton.cs.algs4.StdIn;
import edu.princeton.cs.algs4.StdRandom;
import edu.princeton.cs.algs4.WeightedQuickUnionUF;

public class Percolation {

    private WeightedQuickUnionUF uf;
    private int[][] grid;
    private int openSites;
    private int gridSize;

    /**
     * Creates n-by-n grid, with all sites initially blocked
     * 
     * @param n
     */
    public Percolation(int n) {
        if (n <= 0) {
            throw new IllegalArgumentException("Invalid grid size");
        }
        uf = new WeightedQuickUnionUF(n * n + 2);
        grid = new int[n][n];
        // Initialize all sites as blocked
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = 0;
            }
        }
        openSites = 0;
        gridSize = n;
    }

    /**
     * Opens the site (row, col) if it is not open already
     * 
     * @param row
     * @param col
     */
    public void open(int row, int col) {

        if (row < 1 || row > gridSize || col < 1 || col > gridSize) {
            throw new IllegalArgumentException("Invalid row or column");
        }
        if (isOpen(row, col)) {
            return;
        }
        grid[row - 1][col - 1] = 1;
        openSites++;
        // Get index in uf
        int index = (row - 1) * gridSize + (col - 1) + 1;
        if (row == 1) {
            uf.union(0, index);
        }
        if (row == gridSize) {
            uf.union(gridSize * gridSize + 1, index);
        }

        if (row > 1 && isOpen(row - 1, col)) {
            uf.union(index, index - gridSize);
        }
        if (row < gridSize && isOpen(row + 1, col)) {
            uf.union(index, index + gridSize);
        }
        if (col > 1 && isOpen(row, col - 1)) {
            uf.union(index, index - 1);
        }
        if (col < gridSize && isOpen(row, col + 1)) {
            uf.union(index, index + 1);
        }

    }

    /**
     * Is the site (row, col) open?
     * 
     * @param row
     * @param col
     * @return
     */
    public boolean isOpen(int row, int col) {
        if (row < 1 || row > gridSize || col < 1 || col > gridSize) {
            throw new IllegalArgumentException("Invalid row or column");
        }
        return grid[row - 1][col - 1] == 1;
    }

    /**
     * Is the site (row, col) full?
     * 
     * @param row
     * @param col
     * @return
     */
    public boolean isFull(int row, int col) {
        if (row < 1 || row > gridSize || col < 1 || col > gridSize) {
            throw new IllegalArgumentException("Invalid row or column");
        }
        // A full site is an open site that can be connected to an open site in the top row via a chain of neighboring (left, right, up, down) open sites.
        return uf.find(0) == uf.find((row - 1) * gridSize + col);
    }

    /**
     * Returns the number of open sites
     * 
     * @return
     */
    public int numberOfOpenSites() {
        return openSites;
    }

    /**
     * Does the system percolate?
     * 
     * @return
     */
    public boolean percolates() {
        // Check if the virtual top and virtual bottom are connected
        return uf.find(0) == uf.find(gridSize * gridSize + 1);
    }

    public static void main(String[] args) {
        // Test the Percolation class
        int n = 5000;
        Percolation p = new Percolation(n);
        while (!p.percolates()) {
            int row = StdRandom.uniformInt(0, n) + 1;
            int col = StdRandom.uniformInt(0, n) + 1;
            p.open(row, col);
        }
        StdOut.println("Percolates");
        StdOut.println("Number of open sites: " + p.numberOfOpenSites());
        // Print ratio of open sites
        StdOut.println("Ratio: " + (double) p.numberOfOpenSites() / (n * n));
    }
}
