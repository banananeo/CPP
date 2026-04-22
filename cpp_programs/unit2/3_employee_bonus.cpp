// Aim: Calculate employee bonus
// Algorithm: Male=5%, Female=10%, Extra 2% if salary<10000
// Result: Salary=8000 F → Bonus=960, Total=8960

#include<iostream>
using namespace std;
int main() {
    float salary, bonus;
    char gender;
    cout << "Enter salary and gender (M/F): ";
    cin >> salary >> gender;
    if(gender == 'M') bonus = salary * 0.05;
    else bonus = salary * 0.10;
    if(salary < 10000) bonus += salary * 0.02;
    cout << "Bonus = " << bonus;
    cout << "\nTotal Salary = " << salary + bonus;
    return 0;
}
