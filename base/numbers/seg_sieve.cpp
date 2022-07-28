#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 1;
bool sieve[N];

// step 1
void createSieve()
{
    for (int i = 0; i <= N; i++)
        sieve[i] = 1;

    for (int i = 2; i * i <= N; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

// step 2
vector<int> generatePrimes(int r)
{
    vector<int> primes;
    for (int i = 2; i * i < r; i++)
    {
        if (sieve[i])
            primes.push_back(i);
    }
    return primes;
}
int main()
{
    createSieve();

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        vector<int> Primes = generatePrimes(r);

        int dummy[r - l + 1];

        for (int i = 0; i < (r - l + 1); i++)
            dummy[i] = true;

        for (auto pr : Primes)
        {
            int firstMultiple = ((l / pr) * pr);
            if (firstMultiple < l)
                firstMultiple += pr;
            for (int j = max(pr * pr, firstMultiple); j <= r; j += pr)
            {
                dummy[j - l] = false;
            }
        }

        for (int i = l; i <= r; i++)
        {
            if (dummy[i - l])
                cout << i << " ";
        }
        cout << endl;
    }
}