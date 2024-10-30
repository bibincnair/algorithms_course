from typing import List


def binary_sort(arr: List[int], key: int) -> int:
    """
    Binary search algorithm to find the key in the array.
    :param arr: list of integers
    :param key: integer
    :return: index
    """
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            left = mid + 1
        else:
            right = mid - 1
    return -1
