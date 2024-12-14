import pytest
import pyalgos.binary_sort as binary_sort


def test_element_found():
    arr = [1, 2, 3, 4, 5]
    key = 3
    expected_index = 2
    result = binary_sort(arr, key)
    assert result == expected_index


def test_element_not_found():
    arr = [1, 2, 3, 4, 5]
    key = 6
    expected_index = -1
    result = binary_sort(arr, key)
