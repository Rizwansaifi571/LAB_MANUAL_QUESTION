/*
Write a program to implement Insertion Sort on an array.
 Input: arr = [12, 11, 13, 5, 6]
 Output: [5, 6, 11, 12, 13]
*/

#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    InsertionSort(arr, 5);
    printArray(arr, 5);
    return 0;
}