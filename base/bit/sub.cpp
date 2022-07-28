#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int res = 0, borrow = 0;

    while (b != 0)
    {
        borrow = ~a & b; // res & b
        res = a ^ b;

        a = res;
        b = borrow << 1;
    }
    cout << res << endl; // only a>b
}