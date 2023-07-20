#include<bits/stdc++.h>

using namespace std;
int clearRangeOfBit(int x, int i, int j) {
    int a = (~0) << j;
    int b = (1 << i) - 1;
    int mask = (a | b);
    return (mask & x);
}// how I made money in one year?
// simple working hard;
// .this keyboard is fine in the 
// I need 30% scholarship

int main () {
    int i, j, x;
    cin >> i >> j >> x;
    cout << clearRangeOfBit(x, i, j) << endl;
}