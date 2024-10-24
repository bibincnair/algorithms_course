public class FindConnection {
    private int rank[];
    private int parent[];
    private int n;

    public FindConnection(int n) {
        this.n = n;
        rank = new int[n];
        parent = new int[n];
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    public int find_root(int i) {
        while (i != parent[i]) {
            i = parent[i];
        }
        return i;
    }

    public void union(int p, int q) {
        int p_root = find_root(p);
        int q_root = find_root(q);
        if (rank[p] < rank[q]) {
            parent[p_root] = q_root;
        } else if (rank[p] > rank[q]) {
            parent[q_root] = p_root;
        } else {
            parent[q_root] = p_root;
            rank[p_root]++;
        }
        n--;
    }

    public boolean is_connected() {
        return n == 1;
    }

    public static void main(String[] args) {
        FindConnection uf = new FindConnection(10);
        uf.union(4, 3);
        uf.union(3, 8);
        uf.union(6, 5);
        uf.union(9, 4);
        uf.union(2, 1);

        System.out.println(uf.is_connected()); // false

        uf.union(5, 0);
        uf.union(7, 2);
        uf.union(6, 1);
        uf.union(7, 3);

        System.out.println(uf.is_connected()); // true
    }
}
