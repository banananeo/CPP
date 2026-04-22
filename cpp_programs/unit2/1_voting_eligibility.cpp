// Aim: Check voting eligibility
// Algorithm: If age>=18 → Eligible, else Not Eligible
// Result: Enter age: 20 → Eligible to Vote

#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if(age >= 18) cout << "Eligible to Vote";
    else cout << "Not Eligible to Vote";
    return 0;
}
