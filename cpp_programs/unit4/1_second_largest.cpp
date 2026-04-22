// Aim: Find second largest number in array
// Algorithm: Track largest and second largest while traversing
// Result: Enter: 3 7 1 9 5 → Second Largest = 7

#include<iostream>
using namespace std;
int main() {
    int a[5], large, second;
    cout << "Enter 5 numbers: ";
    for(int i=0; i<5; i++) cin >> a[i];
    large = second = -9999;
    for(int i=0; i<5; i++) {
        if(a[i] > large) {
            second = large;
            large = a[i];
        }
        else if(a[i] > second)
            second = a[i];
    }
    cout << "Second Largest = " << second;
    return 0;
}
