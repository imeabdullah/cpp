#include <iostream>

using namespace std;

void printSum(int x,int y)
{
    cout<<x+y<<endl;
}

void invoke(int x,int y,void (*func)(int x,int y))
{
    func(x,y);
}

int main()
{
    invoke(10,200,printSum);

    return 0;
}
