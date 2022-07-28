#include <iostream>

using namespace std;

void print1(int n);
void print2(int n);
void print3(int n);
void print4(int n);
void print5(int n);
void print6(int n);

int main()
{
    int n;
    cin >> n;
    print6(n);
}

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
            cout << "* ";
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
                cout << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << i << " ";
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";

        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "  ";

        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}
