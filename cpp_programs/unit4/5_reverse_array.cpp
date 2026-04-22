// Aim: Print array in reverse order
// Algorithm: Loop from last index to 0, print each element
// Result: Enter: 1 2 3 4 5 → Reversed: 5 4 3 2 1

#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 numbers: ";
    for(int i=0; i<5; i++) cin >> a[i];
    cout << "Reversed Array: ";
    for(int i=4; i>=0; i--)
        cout << a[i] << " ";
    return 0;
}
