/*
Write aprogram to merge two sorted arrays into one sorted array.
 Input: arr1 = [1, 3, 5], arr2 = [2, 4, 6]
 Output: [1, 2, 3, 4, 5, 6]
 
*/


#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int merged[n1 + n2];  // Create a new array to hold the merged result

    // Copy elements from the first array
    for (int i = 0; i < n1; ++i) {
        merged[i] = arr1[i];
    }
    
    // Copy elements from the second array
    for (int i = 0; i < n2; ++i) {
        merged[n1 + i] = arr2[i];
    }
    
    // Print the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; ++i) {
        cout << merged[i] << " ";
    }

    return 0;
}
