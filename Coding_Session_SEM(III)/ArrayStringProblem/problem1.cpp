/*
1. Write a program to find the minimum and maximum element from an array.
Input: arr = [15, 3, 1, 6, 5, 8]
Output: 1 and 15
*/

#include <iostream>
using namespace std;

void MinMax(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        } else if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << min << endl;
    cout << max << endl;
}

int main() {
    int arr[] = {15, 3, 1, 6, 5, 8};
    MinMax(arr, 6);
    return 0;
}