/*
Write a program to find the count of vowels and consonants in a given string.
Input: String = "krmangalamuniversity"
Output: Vowels: 7, Consonants: 13
*/

#include <iostream>
#include <cctype>
using namespace std;

void CountVowelsAndConsonants(string str) {
    int vowel = 0, consonant = 0;
    for(int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        }
        else if(isalpha(ch)) {
            consonant++;
        }
    }
    cout << "Vowels : " << vowel << endl;
    cout << "Consonants : " << consonant << endl;
}

int main() {
    string str = "krmangalamuniversity";
    CountVowelsAndConsonants(str);
    return 0;
}