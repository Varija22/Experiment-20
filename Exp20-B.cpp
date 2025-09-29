]#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int n, int key) {
    int i = 0;
    while (i < n) {
        if (arr[i] == key) return i;  // Element found
        i++;
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {3, 6, 9, 12, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int result = sequentialSearch(arr, n, key);
    if (result != -1)
        cout << "Sequential Search: Element found at index " << result << endl;
    else
        cout << "Sequential Search: Element not found" << endl;

    return 0;
}
