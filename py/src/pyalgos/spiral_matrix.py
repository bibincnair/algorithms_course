from typing import List


class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        spiral_matrix = []
        top = 0
        bottom = len(matrix) - 1
        left = 0
        right = len(matrix[0]) - 1

        while left <= right and top <= bottom:
            # 1. Traverse to right.
            for i in range(left, right + 1):
                spiral_matrix.append(matrix[top][i])
            top += 1
            # 2. Traverse to bottom.
            if top <= bottom:
                for i in range(top, bottom + 1):
                    spiral_matrix.append(matrix[i][right])
                right -= 1
            # 3. Traverse to left.
            if left <= right and top <= bottom:
                for i in range(right, left - 1, -1):
                    spiral_matrix.append(matrix[bottom][i])
                bottom -= 1
            # 4. Traverse to top.
            if top <= bottom and left <= right:
                for i in range(bottom, top - 1, -1):
                    spiral_matrix.append(matrix[i][left])
                left += 1
        return spiral_matrix
