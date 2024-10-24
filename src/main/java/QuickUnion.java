public class QuickUnion {

    private int[] id;

    public QuickUnion(int N) {
        id = new int[N];
        for (int i = 0; i < N; i++) {
            id[i] = i;
        }
    }

    public int find_root(int i){
        while(i != id[i]){
            i = id[i];
        }
        return i;
    }

    public void union(int p, int q){

        int root_p = find_root(p);
        int root_q = find_root(q);
        id[root_p] = root_q;
    }

    public boolean connected(int p, int q){
        return find_root(p) == find_root(q);
    }

    public static void main(String[] args) {
        QuickUnion uf = new QuickUnion(10);
        uf.union(4, 3);
        uf.union(3, 8);
        uf.union(6, 5);
        uf.union(9, 4);
        uf.union(2, 1);

        System.out.println(uf.connected(8, 9)); // true
        System.out.println(uf.connected(5, 4)); // false

        uf.union(5, 0);
        uf.union(7, 2);
        uf.union(6, 1);
        uf.union(7, 3);

        System.out.println(uf.connected(0, 7)); // true
    }
    
}
