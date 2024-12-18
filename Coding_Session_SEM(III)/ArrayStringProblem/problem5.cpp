/*
Write the code of the Binary Search algorithm and explain its time complexity.
*/

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << BinarySearch(arr, 9, 2) << endl;
    return 0;
}