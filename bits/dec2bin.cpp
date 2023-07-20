#include<bits/stdc++.h>

using namespace std;

void binToDecimal(int &n) {
    int ans = 0;
    int p = 1;

    while(n > 0) {
        int lastBit = (n & 1);
        ans += p * lastBit;

        p = p*10;
        n = n >> 1;
    }
    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;
    binToDecimal(n);
    // cout << n << endl;
}