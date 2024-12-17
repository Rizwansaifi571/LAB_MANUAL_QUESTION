/*
Write the intuition and code of the Selection Sort algorithm.
*/

// Intuition of Selection Sort:
// Selection Sort is an in-place comparison-based sorting algorithm. The main idea behind selection sort is to repeatedly select the minimum (or maximum) element from the unsorted portion of the array and swap it with the leftmost unsorted element.

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }    
}

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    SelectionSort(arr, 5);
    PrintArray(arr, 5);
    return 0;
}