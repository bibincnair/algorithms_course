fn binary_search(arr: Vec<i32>, key: i32) -> i32 {
    let mut low = 0;
    let mut high = arr.len() as i32 - 1;
    while low <= high {
        let mid = low + (high - low) / 2;
        if arr[mid as usize] == key {
            return mid;
        } else if arr[mid as usize] < key {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    -1
}

#[cfg(test)]

mod tests {
    use super::*;

    #[test]
    fn test_binary_search() {
        assert_eq!(binary_search(vec![1, 2, 3, 4, 5], 3), 2);
        assert_eq!(binary_search(vec![1, 2, 3, 4, 5], 5), 4);
        assert_eq!(binary_search(vec![1, 2, 3, 4, 5], 6), -1);
    }
}
