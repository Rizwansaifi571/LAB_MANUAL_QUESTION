/*
Write a program to check if a given string is a palindrome.
 Input: String = "madam"
 Output: True
*/

#include <iostream>
using namespace std;

bool checkpalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;
    while(start < end) {
        if(str[start] == str[end]) {
            start++;
            end--;
        }
        else {
            return -1;
        }
    }
    return 1;
}

int main() {
    string str = "madam";
    if(checkpalindrome(str)) {
        cout << "true" << endl;
    } else {
        "false";
    }
    return 0;
}