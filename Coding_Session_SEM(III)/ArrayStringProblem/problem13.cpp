/*
You are given an array of integers, arr, that contains n-1 distinct numbers
 ranging from 1 to n. The numbers in the array are unique and lie within the range
 [1, n],but one nu
 Input: arr = [1, 2, 4, 5], n = 5
 Output: 3
*/

#include <iostream>
using namespace std;

int findNumber(int arr[], int n) {
    int totalsum = (n * (n + 1)) / 2;
    int arraysum = 0;
    for(int i = 0; i < n - 1; i++) {
        arraysum += arr[i];
    }

    return totalsum - arraysum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    cout << findNumber(arr, 5) << endl;
    return 0;
}