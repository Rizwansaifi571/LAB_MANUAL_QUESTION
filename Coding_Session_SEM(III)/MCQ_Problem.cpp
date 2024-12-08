/*  Ques 1
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

// int main() {
//     int X = 3;
//     int Y= 4;
//     int Z = 0;
//     for(int i = 1; i <= X; i++) {
//         for(int j = 1; j <= Y; j++) {
//             Z = Z + i + j;
//         }
//     }
//     cout << Z << endl;
//     return 0;
// }


/*  Ques 2
input X = 3
input Y = 4
for i 1 to X do
forj = 1 to Y do
Z=Z+i-j
output Z
2.4
*/

// int main() {
//     int x = 3;
//     int y = 4;
//     int z = 0;
//     for(int i = 1; i <= x; i++) {
//         for(int j = 1; j <= y; j++) {
//             z = z + i - j;
//         }
//     }
//     cout << z;
// }


/* Ques 3
input P = 4
input Q = 2
for i 1 to P do
forj 1 to Q do
output R
1. 20
2. 28
3. 24
4. 30
*/

int main() {
    int p = 4, q = 2, z = 0;
    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++) {
            z = z + (i * j);
        }
    }
    cout << z;
}

