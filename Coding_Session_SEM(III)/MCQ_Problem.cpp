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

// int main() {
//     int p = 4, q = 2, z = 0;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z + (i * j);
//         }
//     }
//     cout << z;
// }



/* QUes 4
input M 5
input N = 3
S = 1
for i 1 to M do
forj = 1 to N do
S =S+(i*j)
output S
l. 46
2. 61
3. 81
4. 91
*/

// int main() {
//     int p = 5, q = 3, z = 1;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z + (i * j);
//         }
//     }
//     cout << z;
// }


/* Ques 5
input X = 4
input Y = 3
for i 1 to X do
forj = 1 to Y do
output Z
1. 1200
2. 2160
3. 1728
4. None of these

*/

// int main() {
//     int p = 4, q = 3, z = 1;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z * (i + j);
//         }
//     }
//     cout << z;
// }



/*Ques 6
input N = 3
input M 5
s=o
for i 1 to N do
forj 1 to M do
S=S-i-j
output S
1. -50
2. -60
3. -75
4. -81
*/

// int main() {
//     int p = 3, q = 5, z = 0;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z  -i - j;
//         }
//     }
//     cout << z;
// }



/* QUes 7
input X = 2
input Y = 4
z = o
for i = 1 to X do
for j = 1 to Y do
Output Z
1. 24
2. 32
3. 50
4. 55

*/

// int main() {
//     int p = 2, q = 4, z = 0;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z +  (i * j) + j;
//         }
//     }
//     cout << z;
// }


/*Ques 8
input A = 3
input B = 3
c=o
for i = 1 to A do
forj = 1 to B do
C = C + (i + j) ^ 2
output C
1. 99
2. 150
3. 156
4. None of these
*/

// int main() {
//     int p = 3, q = 3, z = 0;
//     for(int i = 1; i <= p; i++) {
//         for(int j = 1; j <= q; j++) {
//             z = z +  (i + j) * (i + j);
//         }
//     }
//     cout << z;
// }


/*Ques 9
input N = 4
input M = 2
for i = 1 to N do
forj = 1 to M do
R = R + (i -j)^ 2
output R
14
2. 16
3. 18
4. 20
*/

int main() {
    int p = 4, q = 2, z = 0;
    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++) {
            z = z +  (i - j) * (i - j);
        }
    }
    cout << z;
}
