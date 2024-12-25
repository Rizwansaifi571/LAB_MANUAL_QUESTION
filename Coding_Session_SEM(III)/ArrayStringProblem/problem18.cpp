/*

Write aprogram to find the sum of digits in a number.
 Input: 1234
 Output: 10
 */

#include <iostream>
using namespace std;

int digitsum(int num) {
    int sum = 0;
    while(num > 0) {
        int left = num % 10;
        num = num / 10; 
        sum += left;
    }   
    return sum;
}

int main() {
    int num = 1234;
    cout << digitsum(num) << endl;
    return 0;
}