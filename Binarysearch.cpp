#include <iostream>
using namespace std;

// Function to perform binary search (iterative version)
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // To avoid overflow

        // If the target is found at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is greater than mid, search in the right half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If the target is smaller than mid, search in the left half
        else {
            high = mid - 1;
        }
    }

    // Target not found
    return -1;
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};  // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int target = 7;  // Target to search for

    cout << "Array: ";
    printArray(arr, n);

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
