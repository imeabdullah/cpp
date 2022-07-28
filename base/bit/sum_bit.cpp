#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a ^ b;
        int carry = a & b;

        while (carry > 0)
        {
            carry <<= 1;
            a = sum;
            b = carry;

            sum = a ^ b;
            carry = a & b;
        }

        cout << sum << endl;
    }
}