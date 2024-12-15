/*
Write a program to find the sum of all even numbers from an array.
Input: arr = [15, 31, 1, 6, 4, 30]
Output: 40
*/

#include <iostream>
using namespace std;

int EvenSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size;i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {15, 31, 1, 6, 4, 30};
    cout << EvenSum(arr, 6) << endl;
    return 0;
}
