#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;       // Element found
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int result = binarySearch(arr, n, key);
    if (result != -1)
        cout << "Binary Search: Element found at index " << result << endl;
    else
        cout << "Binary Search: Element not found" << endl;

    return 0;
}
