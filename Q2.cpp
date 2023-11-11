#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midVal = arr[mid];

        if (midVal == target) {
            return mid;
        } else if (midVal < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Element not found
}

int infiniteArraySearch(int arr[], int target) {
    int low = 0, high = 1;

    // Double the high index until we find a range where the target might be present
    while (arr[high] < target) {
        low = high;
        high *= 2;
    }

    // Perform binary search within the identified range
    return binarySearch(arr, low, high, target);
}

int main() {
    // Example usage:
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, /*...*/}; // Infinite sorted array
    int target = 7;
    int result = infiniteArraySearch(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    return 0;
}
