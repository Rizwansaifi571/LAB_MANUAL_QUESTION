/*
input X = 3
input Y = 4
z=o
for i = 1 to X do
forj = 1 to Y do
z=z+i+j
output Z
1. 50
2. 54
3. 48
4. 60

*/

#include <iostream>
using namespace std;

int main() {
    int X = 3;
    int Y= 4;
    int Z = 0;
    for(int i = 1; i <= X; i++) {
        for(int j = 1; j <= Y; j++) {
            Z = Z + i + j;
        }
    }
    cout << Z << endl;
    return 0;
}
