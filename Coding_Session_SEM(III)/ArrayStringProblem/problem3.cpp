/*
Write the intuition and code of the Bubble Sort algorithm.
*/

#include <iostream>
using namespace std;

void bubble_sort (int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}


void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {6, 5, 4, 3, 2, 1};
    bubble_sort(arr, 6);
    printArray(arr, 6);
    return 0;
}