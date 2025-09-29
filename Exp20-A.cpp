#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;  // Element found
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int result = linearSearch(arr, n, key);
    if (result != -1)
        cout << "Linear Search: Element found at index " << result << endl;
    else
        cout << "Linear Search: Element not found" << endl;

    return 0;
}
