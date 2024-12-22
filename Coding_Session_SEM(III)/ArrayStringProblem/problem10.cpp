/*
Write aprogram to remove all duplicate characters from a string.
 Input: String = "programming"
 Output: "progamin"
*/

#include <iostream>
using namespace std;

string RemoveDuplicate(string str) {
    string result = "";
    for(int i = 0; i < str.length(); i++) {
        bool isDublicate = false;
        for(int j = 0; j < result.length(); j++) {
            if(str[i] == result[j]) {
                isDublicate = true;
                break;                
            }
        }
        if(!isDublicate) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string String = "programming";
    cout << RemoveDuplicate(String) << endl;
    return 0;
}