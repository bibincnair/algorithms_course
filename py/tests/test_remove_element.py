import pytest
from pyalgos.remove_element import Solution

def test_element_found():
    input = [3,2,2,3]
    val = 3
    expected_output = 2
    sol = Solution()
    result = sol.removeElement(input, val)
    assert result == expected_output
    assert input[:result] == [2, 2]