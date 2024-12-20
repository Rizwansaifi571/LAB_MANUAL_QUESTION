/*
Write a program to reverse a given string.
Input: String = "KRMU"
Output: "UMRK
*/

#include <iostream>
using namespace std;

void ReverseString(string str) {
    int start = 0;
    int end = str.length() - 1;
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str << endl;
}

int main() {
    string str = "KRMU";
    ReverseString(str);
    cout << str << endl;
    return 0;
}