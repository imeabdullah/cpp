#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

// call by reference
void changeValue(int *p) 
{
    *p=10;
}

// basic intro to pointer
void introPointer()
{
    cout<<"declaration of pointer"<<endl;
    int a=12;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<&a<<endl;
    printf("%u\n",p); // unsigned integer

    cout<<"pointer of pointer"<<endl;
    int **ptr=&p;
    cout<<ptr<<endl;
    cout<<&p<<endl;

    // generic pointer
    void *px=&ptr;
    cout<<"Return just start address: "<<px<<endl;
}

// how to create a dynamic array of 3x3
void twoDDynamicArray()
{
    int **arr=new int*[3];
    for(int i=0;i<3;i++) arr[i]=new int[3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) arr[i][j]=i+1;
    }
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
   
    for(int i=0;i<3;i++) delete[] arr[i];
    delete[] arr;
    arr=NULL;
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}

void pointerToArray()
{
    int arr[]={1,2,9,3,4};
    int* p=arr; //&arr[0]
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        cout<<p+i<<" "<<*(p+i)<<endl;
    
    // char
    char C[20];
    cin>>C;
    cout<<C<<endl;

    C[0]='A';
    C[1]='A';
    C[2]='A';
    C[3]='\0';
    cout<<C<<endl;

    char* c2=C;
    for(int i=0;i<strlen(C);i++) cout<<*c2<<endl;

    char *pc="Hello World!"; //save as constant like cout<<"Hello World!";
}
int main()
{
    pointerToArray();
}