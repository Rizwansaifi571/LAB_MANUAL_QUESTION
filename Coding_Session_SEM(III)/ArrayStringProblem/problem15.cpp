/*
 Write aprogram to find the second largest element in an array.
 Input: arr = [10, 20, 4, 45, 99]
 Output: 45
*/

// #include <iostream>
// using namespace std;

// int secondLargestElement(int arr[], int size) {
//     for(int i = 0; i < size - 1; i++) {
//         int maxIndex = i;
//         for(int j = i + 1; j < size; j++) {
//             if(arr[maxIndex] > arr[j]) {
//                 maxIndex = j;
//             }
//         }
//         swap(arr[i], arr[maxIndex]);
//     }
//     return arr[size - 2];
// }

// int main() {
//     int arr[5] = {10, 20, 4, 45, 99};
//     cout << secondLargestElement(arr, 5) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int size) {
    for(int i = 0; i < 2; i++) {
        int maxIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[maxIndex] < arr[j]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
    return arr[1];
}

int main() {
    int arr[5] = {10, 20, 4, 45, 99};
    cout << secondLargestElement(arr, 5) << endl;
    return 0;
}