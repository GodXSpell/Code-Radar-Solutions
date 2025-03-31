int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the mid index

        if (arr[mid] == target) {
            return mid; // Return the index where target is found
        } else if (arr[mid] < target) {
            left = mid + 1; // Narrow search to the right half
        } else {
            right = mid - 1; // Narrow search to the left half
        }
    }

    return -1; // If target is not found, return -1
}