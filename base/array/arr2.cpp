#include<bits/stdc++.h>

using namespace std;

int main()
{
    // 2D Dynamic Array
    int **arr =new int*[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=new int[5];
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        arr[i][j]=1;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0;i<5;i++)
        delete[] arr[i];
    arr=nullptr;

    cout<<"\t\tEND\n";
    // resizing dynamic array
    arr=new int*[10];

     for(int i=0;i<10;i++)
    {
        arr[i]=new int[10];
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        arr[i][j]=1;
    }

    for(int i=0;i<10;i++)
    {
        cout<<"\t";
        for(int j=0;j<10;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    for(int i=0;i<10;i++)
        delete[] arr[i];
    arr=nullptr;

}