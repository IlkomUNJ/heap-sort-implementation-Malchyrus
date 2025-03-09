#include "maxheapify.cpp"
void heapSort(int arr[], int n) {
    maxHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}