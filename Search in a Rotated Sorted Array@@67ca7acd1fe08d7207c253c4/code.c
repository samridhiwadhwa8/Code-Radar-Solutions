// Your code here...
#include <stdio.h>
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {
            // Target lies within the sorted left half
            if (arr[left] <= target && target < arr[mid]) {
                right = mid - 1;
            } else {  // Target lies in the right half
                left = mid + 1;
            }
        }
        // Right half is sorted
        else {
            // Target lies within the sorted right half
            if (arr[mid] < target && target <= arr[right]) {
                left = mid + 1;
            } else {  // Target lies in the left half
                right = mid - 1;
            }
        }
    }

    // Target not found
    return -1;
}
