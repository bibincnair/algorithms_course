from typing import List
from collections import defaultdict


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row_flags = defaultdict(lambda: defaultdict(bool))
        col_flags = defaultdict(lambda: defaultdict(bool))
        boxes_flags = defaultdict(lambda: defaultdict(bool))

        for row in range(9):
            for col in range(9):
                curr_char = board[row][col]
                if curr_char == ".":
                    continue
                curr_char = int(curr_char)
                box_idx = ((row // 3) * 3) + (col // 3)
                if (
                    row_flags[row][curr_char]
                    or col_flags[col][curr_char]
                    or boxes_flags[box_idx][curr_char]
                ):
                    return False

                row_flags[row][curr_char] = True
                col_flags[col][curr_char] = True
                boxes_flags[box_idx][curr_char] = True
        return True
