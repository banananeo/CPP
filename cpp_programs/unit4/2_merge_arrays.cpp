// Aim: Merge two arrays into one
// Algorithm: Copy array1 then array2 into array3
// Result: 1 2 3 + 4 5 6 → Merged: 1 2 3 4 5 6

#include<iostream>
using namespace std;
int main() {
    int a[3], b[3], c[6];
    cout << "Enter 3 numbers for array 1: ";
    for(int i=0; i<3; i++) cin >> a[i];
    cout << "Enter 3 numbers for array 2: ";
    for(int i=0; i<3; i++) cin >> b[i];
    for(int i=0; i<3; i++) c[i] = a[i];
    for(int i=0; i<3; i++) c[i+3] = b[i];
    cout << "Merged Array: ";
    for(int i=0; i<6; i++) cout << c[i] << " ";
    return 0;
}
