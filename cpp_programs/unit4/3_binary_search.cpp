// Aim: Implement binary search
// Algorithm: Divide array in half, compare mid with key
// Result: Search 7 → Found at index 3

#include<iostream>
using namespace std;
int main() {
    int a[5] = {1,3,5,7,9};
    int key, low=0, high=4, mid, found=0;
    cout << "Enter number to search: ";
    cin >> key;
    while(low <= high) {
        mid = (low+high)/2;
        if(a[mid] == key) {
            cout << "Found at index " << mid;
            found = 1;
            break;
        }
        else if(a[mid] < key) low = mid+1;
        else high = mid-1;
    }
    if(!found) cout << "Not Found";
    return 0;
}
