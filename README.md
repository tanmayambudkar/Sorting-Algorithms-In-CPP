# Aim: To study and implement Sorting Algorithm
# Software Required:
Visual Studio
# Theory:
A Sorting Algorithm is used to rearrange a given array or list of elements in an order. For example, a given array [10, 20, 5, 2] becomes [2, 5, 10, 20] after sorting in increasing order and becomes [20, 10, 5, 2] after sorting in decreasing order.

There exist different sorting algorithms for different different types of inputs, for example a binary array, a character array, an array with a large range of values or an array with many duplicates or a small vs large array.
The algorithms may also differ according to output requirements. For example, stable sorting (or maintains original order of equal elements) or not stable.
Sorting is provided in library implementation of most of the programming languages. These sorting functions typically are general purpose functions with flexibility of providing the expected sorting order (increasing or decreasing or by a specific key in case of objects).

<ins>Selection Sort</ins>:
Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.

+ First we find the smallest element and swap it with the first element. This way we get the smallest element at its correct position.
+ Then we find the smallest among remaining elements (or second smallest) and swap it with the second element.
+ We keep doing this until we get all elements moved to correct position.

<ins>Bubble Sort</ins>:

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.

We sort the array using multiple passes. After the first pass, the maximum element goes to end (its correct position). Same way, after second pass, the second largest element goes to second last position and so on.
In every pass, we process only those elements that have already not moved to correct position. After k passes, the largest k elements must have been moved to the last k positions.
In a pass, we consider remaining elements and compare all adjacent and swap if larger element is before a smaller element. If we keep doing this, we get the largest (among the remaining elements) at its correct position.

<ins>QuickSort</ins>:

QuickSort is a sorting algorithm based on the Divide and Conquer that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

It works on the principle of divide and conquer, breaking down the problem into smaller sub-problems.

There are mainly three steps in the algorithm:

Choose a Pivot: Select an element from the array as the pivot. The choice of pivot can vary (e.g., first element, last element, random element, or median).
Partition the Array: Re arrange the array around the pivot. After partitioning, all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. The pivot is then in its correct position, and we obtain the index of the pivot.
Recursively Call: Recursively apply the same process to the two partitioned sub-arrays (left and right of the pivot).
Base Case: The recursion stops when there is only one element left in the sub-array, as a single element is already sorted.

# Implementaion:
The concept of sorting is explained by the following codes,
+ Selection sort
+ Bubble sort
+ QuickSort
  
# Algorithms:
Algorithm: Sorting and Searching in an Array
1. *Start*
2. Define a class `bubleSort` with:
*Function `sort(std::vector<int>& arr)`*
     1. Find the size `n` of the array.
     2. Repeat for `i = 0` to `n-2`:
         For each `j = 0` to `n-i-2`:
           If `arr[j] > arr[j+1]`, swap them.
3. Define a class `SearchArr` with:
   *Function `binarysearch(const std::vector<int>& arr, int target)`*
     1. Initialize `low = 0`, `high = n-1`.
     2. While `low <= high`:
        * Compute `mid = low + (high - low)/2`.
        * If `arr[mid] == target`, return `mid`.
        * If `arr[mid] < target`, set `low = mid + 1`.
        * Else set `high = mid - 1`.
     3. If element is not found, return `-1`.
4. In `main()`:
   1. Create objects `sorter` (for sorting) and `s` (for searching).
   2. Initialize an array `arr = {-1, 0, 3, 5, 9, 12}`.
   3. Call `sorter.sort(arr)` to sort the array.
   4. Print the sorted array.
   5. Define `target = 9`.
   6. Call `s.binarysearch(arr, target)`.
   7. If result ≠ -1 → print index of element.
      Else → print *"Element not found"*.
5. End
   
Algorithm: Quick Sort

1. Start
2. Partition function (`partition(arr, low, high)`):
     Choose the last element as pivot (`arr[high]`).
     Initialize index `i = low - 1`.
     For each `j = low` to `high - 1`:

       If `arr[j] < pivot`:

         Increment `i`.
         Swap `arr[i]` and `arr[j]`.
     After loop, swap `arr[i+1]` and `arr[high]`.
     Return `i+1` (partition index).
3. Quick Sort function (`quickSort(arr, low, high)`):
     If `low < high`:
     1. Call `partition(arr, low, high)` to get pivot index `pi`.
     2. Recursively call `quickSort(arr, low, pi - 1)`.
     3. Recursively call `quickSort(arr, pi + 1, high)`.
4. Main function:

     Initialize an array `arr = {10,7,8,9,1,5}`.
     Call `quickSort(arr, 0, n-1)`.
     Print the sorted array.
5. End

Algorithm: Selection Sort

1. Start
2. Take an unsorted array of size `n`.
3. Repeat the following for `i = 0` to `n-2`:
    Assume the element at index `i` is the minimum (`min_idx = i`).
     Compare this element with all elements to its right (`j = i+1` to `n-1`).
     If any element `arr[j]` is smaller than `arr[min_idx]`, update `min_idx = j`.
     After the inner loop ends, swap `arr[i]` and `arr[min_idx]`.
4. Continue until the whole array is sorted.
5. Print the sorted array.
6. End
   
# Conclusion:
The above codes demonstrates the various techniques to sort a given arrray in C++
