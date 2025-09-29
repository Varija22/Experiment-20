Program 1 – Linear Search

Aim:
To search for a given element in an array using Linear Search method.

Software Used:
VS Code

Theory:

* Linear Search is the simplest search algorithm.
* The algorithm checks each element of the array sequentially until the target element is found or the array ends.
* Works on unsorted arrays.

Algorithm:
1. Start.
2. Input the array elements and the key to be searched.
3. Traverse the array from the first element.
4. Compare each element with the key.
5. If a match is found, return the index.
6. If the array ends without a match, report “not found”.
7. Stop.

Conclusion:
* Successfully implemented Linear Search.
* Searches each element sequentially.
* Simple but less efficient for large arrays.


Program 2 – Sequential Search

Aim:
To search for a given element in an array using Sequential Search method.

Software Used:
VS Code

Theory:

* Sequential Search is essentially similar to linear search.
* Checks elements one by one in order.
* Can be implemented using a while loop or for loop.

Algorithm:
1. Start.
2. Input the array and the key.
3. Initialize an index variable `i = 0`.
4. While `i < n`, compare `arr[i]` with key.
5. If a match is found, return the index.
6. If end of array is reached, display “element not found”.
7. Stop.

Conclusion:
* Successfully implemented Sequential Search.
* Similar to linear search; checks elements in order.
* Works for unsorted arrays, but not efficient for large datasets.



Program 3 – Binary Search

Aim:
To search for a given element in a sorted array using Binary Search method.

Software Used:
VS Code

Theory:

* Binary Search is an efficient divide-and-conquer algorithm.
* The array must be sorted.
* The middle element is compared with the key:

  * If it matches, the search is successful.
  * If key is smaller, search in the left sub-array.
  * If key is larger, search in the right sub-array.
* Reduces the search space by half in each step.

Algorithm:
1. Start.
2. Input the sorted array and key.
3. Initialize `low = 0` and `high = n-1`.
4. While `low <= high`:

   * Compute `mid = (low + high) / 2`.
   * If `arr[mid] == key`, return index.
   * If `arr[mid] < key`, set `low = mid + 1`.
   * If `arr[mid] > key`, set `high = mid - 1`.
5. If `low > high`, display “element not found”.
6. Stop.

Conclusion:
* Successfully implemented Binary Search.
* Much more efficient than linear/sequential search for large sorted arrays.
* Demonstrates divide-and-conquer strategy effectively.


