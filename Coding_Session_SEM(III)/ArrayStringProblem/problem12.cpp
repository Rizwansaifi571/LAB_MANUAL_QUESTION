/*
Write aprogram to find the common elements in two arrays.
 Input: arr1 = [1, 2, 3, 4], arr2 = [3, 4, 5, 6]
 Output: [3, 4]
*/

#include <iostream>
using namespace std;

void CommonElement(int arr1[], int size1, int arr2[], int size2) {
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    CommonElement(arr1, 4, arr2, 4);
    return 0;
}