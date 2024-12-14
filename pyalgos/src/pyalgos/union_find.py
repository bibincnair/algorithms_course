class UnionFind:

    def __init__(self, n):
        self.parent = [i for i in range(n)]
        self.rank = [0 for i in range(n)]

    def find_root(self, x):
        while self.parent[x] != x:
            self.parent[x] = self.parent[self.parent[x]]
            x = self.parent[x]
        return x

    def union(self, x, y):
        root_x = self.find_root(x)
        root_y = self.find_root(y)
        if root_x == root_y:
            return
        if self.rank[root_x] < self.rank[root_y]:
            self.parent[root_x] = root_y
        elif self.rank[root_x] > self.rank[root_y]:
            self.parent[root_y] = root_x
        else:
            self.parent[root_x] = root_y
            self.rank[root_y] += 1

    def is_connected(self, x, y):
        return self.find_root(x) == self.find_root(y)

    def get_parent(self, i):
        return self.parent[i]

    def get_rank(self, i):
        return self.rank[i]

    def __str__(self):
        return f"Parent: {self.parent}\nRank: {self.rank}"
