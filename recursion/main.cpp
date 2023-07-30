#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if(i > n) {
        return;
    }
    cout << "Abdullah" << endl;
    printName(i+1, n);
}

// parameterized vs funcitonal
void sumNum(int i,int n, int sum) {
    if(i > n) {
        cout << sum << endl;
        return;
    }
    sumNum(i+1,n, sum+i);
}

int sum(int i) {
    if(i <= 1) {
        return i;
    }
    return i + sum(i-1);
}

void arrSwap(int i, int n, int arr[]) {
    if(i > (n/2)) {
        return;
    }
    swap(arr[i], arr[n-i-1]);
    arrSwap(i+1,n, arr);
}

bool Palindrome(string &s, int i, int n) {
    if(i > (n/2)) {
        return true;
    }
    if(s[i] != s[n-i-1]) return false;
    return Palindrome(s,i+1, n);
}

int main() {
    //printName(0, 10);
    //sumNum(0, 4, 0);
    //cout << sum(4);
    int arr[] = {1,2,3,4,5};
    arrSwap(0,5,arr);
    for(int i = 0;i<5;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    string s = "MADAMI";
    cout << Palindrome(s,0,s.size()) << endl;
}