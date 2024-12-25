/*
Write aprogram to count the frequency of each element in an array.
 Input: arr = [1, 2, 2, 3, 3, 3]
 Output: {1: 1, 2: 2, 3: 3}
 */

#include <iostream>
using namespace std;

// void coutFrequency(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         int count = 1;
//         if(arr[i] != -1) {
//             for(int j = i + 1; j < n; j++) {
//                 if(arr[i] == arr[j]) {
//                     count++;
//                     arr[j] = -1;
//                 }
//             }
//             cout << arr[i] << ": " << count << ", ";
//         }
//     }
// }


void coutFrequency(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                i++;
            }
        }
        cout << arr[i] << ": " << count << ", ";
    }
}



int main() {
    int arr[] = {1, 2, 2, 3, 3, 3};
    coutFrequency(arr, 6);
    return 0;
}