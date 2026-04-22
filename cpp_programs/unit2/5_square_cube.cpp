// Aim: Display square and cube of n natural numbers
// Algorithm: Loop 1 to n, print i, i*i, i*i*i
// Result: Enter n: 3 → 1 1 1 / 2 4 8 / 3 9 27

#include<iostream>
using namespace std;
int main() {
    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Num\tSquare\tCube\n";
    do {
        cout << i << "\t" << i*i << "\t" << i*i*i << "\n";
        i++;
    } while(i <= n);
    return 0;
}
