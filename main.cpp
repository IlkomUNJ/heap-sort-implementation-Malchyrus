#include "print.cpp"

//this code is similar to heap sort from geekforgeeks except it use array instead of vector
int main() {
    int arr[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    heapSort(arr, n);
    printArr(arr, n);
    
    return 0;
}
