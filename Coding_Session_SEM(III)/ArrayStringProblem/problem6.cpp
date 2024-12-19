/*
Write a program to find the duplicate elements from an array.
Input: arr = [5, 3, 1, 6, 5, 8]
Output: 5
*/

#include <iostream>
using namespace std;

int FindDublicate(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 1, 6, 5, 8};
    cout << FindDublicate(arr, 6) << endl;
    return 0;
}