import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

public class BinarySearchTest {

    @Test
    public void testElementFound() {
        int[] array = { 1, 2, 3, 4, 5 };
        int key = 3;
        int expectedIndex = 2;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testElementNotFound() {
        int[] array = { 1, 2, 3, 4, 5 };
        int key = 6;
        int expectedIndex = -1;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testEmptyArray() {
        int[] array = {};
        int key = 1;
        int expectedIndex = -1;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testSingleElementArrayFound() {
        int[] array = { 5 };
        int key = 5;
        int expectedIndex = 0;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testSingleElementArrayNotFound() {
        int[] array = { 5 };
        int key = 3;
        int expectedIndex = -1;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testFirstElement() {
        int[] array = { 1, 2, 3, 4, 5 };
        int key = 1;
        int expectedIndex = 0;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testLastElement() {
        int[] array = { 1, 2, 3, 4, 5 };
        int key = 5;
        int expectedIndex = 4;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testNegativeNumbers() {
        int[] array = { -5, -4, -3, -2, -1 };
        int key = -3;
        int expectedIndex = 2;
        int result = BinarySearch.binarySearch(array, key);
        assertEquals(expectedIndex, result);
    }

    @Test
    public void testDuplicateElements() {
        int[] array = { 1, 2, 2, 2, 3 };
        int key = 2;
        int result = BinarySearch.binarySearch(array, key);
        assertTrue(result >= 1 && result <= 3);
    }
}