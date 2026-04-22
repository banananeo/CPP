// Aim: Convert time into minutes using function
// Algorithm: Total minutes = (hours×60) + minutes
// Result: Enter 2 30 → Total Minutes = 150

#include<iostream>
using namespace std;
int toMinutes(int h, int m) {
    return (h * 60) + m;
}
int main() {
    int h, m;
    cout << "Enter hours and minutes: ";
    cin >> h >> m;
    cout << "Total Minutes = " << toMinutes(h, m);
    return 0;
}
