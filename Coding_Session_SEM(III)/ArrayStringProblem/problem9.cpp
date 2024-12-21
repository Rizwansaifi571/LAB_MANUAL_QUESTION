/*
Write a program to find the count of odd numbers in a given array.
 Input: arr = [1, 3, 5, 7, 8, 10]
 Output: 4
*/

#include <iostream>
using namespace std;

void CountOdd(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    int arr[] = {1, 3, 5, 7, 8, 10};
    CountOdd(arr, 6);
    return 0;
}