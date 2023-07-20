#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a | b) << endl;
    cout << (a & b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;

    // let and right shift
    cout << (10 << 1) << endl;
    cout << (10 >> 1) << endl;

    // check odd
    int x;
    cin >> x;
    if(x&1){
        cout << "last bit is set\n";
    } else {
        cout << "Last bit is not set\n";
    }
}