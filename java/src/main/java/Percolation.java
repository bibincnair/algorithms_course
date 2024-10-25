package java.src.main.java;
import edu.princeton.cs.algs4.StdRandom;
import edu.princeton.cs.algs4.StdStats;
import edu.princeton.cs.algs4.WeightedQuickUnionUF;

public class Percolation {

    private int[][] grid;

    /**
     * Creates n-by-n grid, with all sites initially blocked
     * 
     * @param n
     */
    public Percolation(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = 0;
            }
        }
    }

    /**
     * Opens the site (row, col) if it is not open already
     * 
     * @param row
     * @param col
     */
    public void open(int row, int col) {
        try {
            if (row < 0 || col < 0) {
                throw new IllegalArgumentException("Invalid row or column less than 0");
            }
            if (row > grid.length || col > grid[0].length) {
                throw new IllegalArgumentException("Invalid row or column greater than grid size");
            }
            grid[row][col] = 1;
        } catch (Exception e) {
            System.out.println("Invalid row or column");
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
        return false;
    }

    /**
     * Is the site (row, col) full?
     * 
     * @param row
     * @param col
     * @return
     */
    public boolean isFull(int row, int col) {
        return false;
    }

    /**
     * Returns the number of open sites
     * 
     * @return
     */
    public int numberOfOpenSites() {
        return 0;
    }

    /**
     * Does the system percolate?
     * 
     * @return
     */
    public boolean percolates() {
        return false;
    }

    public static void main(String[] args) {
        // test client (optional)
    }
}
