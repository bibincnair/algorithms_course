import pytest
import remove_element

def test_element_found():
    arr = [1, 2, 3, 4, 5]
    key = 3
    expected_index = 2
    result = remove_element(arr, key)
    assert result == expected_index
    assert arr[:result] == [1, 2, 4, 5]