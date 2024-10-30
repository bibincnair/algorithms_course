class WeightedQuickUnionUF:

    def __init__(self, n: int) -> None:
        self.id = [i for i in range(n)]
        self.sz = [1 for _ in range(n)]
        self.count = n

    def root(self, i: int) -> int:
        while i != self.id[i]:
            i = self.id[i]
        return i

    def connected(self, p: int, q: int) -> bool:
        return self.root(p) == self.root(q)

    def union(self, p: int, q: int) -> None:
        root_p = self.root(p)
        root_q = self.root(q)

        if root_p == root_q:
            return

        sz_p = self.sz[root_p]
        sz_q = self.sz[root_q]

        if sz_p < sz_q:
            self.id[root_p] = root_q
            self.sz[root_q] += sz_p
        elif sz_p > sz_q:
            self.id[root_q] = root_p
            self.sz[root_p] += sz_q
        else:
            self.id[root_q] = root_p
            self.sz[root_p] += 1

        self.count -= 1

    def number_of_components(self) -> int:
        return self.count

    def size(self, i: int) -> int:
        return self.sz[self.root(i)]


class Percolation:

    def __init__(self, n: int) -> None:
        self.n = n
        self.grid = [[False for _ in range(n)] for _ in range(n)]
        self.uf = WeightedQuickUnionUF(n * n + 2)

    def open(self, row: int, col: int) -> None:
        pass

    def is_open(self, row: int, col: int) -> bool:
        pass

    def is_full(self, row: int, col: int) -> bool:
        pass

    def number_of_open_sites(self) -> int:
        pass

    def percolates(self) -> bool:
        pass


if __name__ == "__main__":
    pass
