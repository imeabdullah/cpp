#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int a) {
    int rev = 0;
    int x = a;
    int p = 1;
    while(x > 0) {
        rev += p * (x % 10);
        x = x / 10;
        p *= 10;
    }
    return a == rev;
}

int main() {
    int n; 
    cin >> n;
    cout << isPalindrome(n) << endl;
}