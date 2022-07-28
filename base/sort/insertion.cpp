#include<iostream>
using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0 and temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        j++;
        arr[j]=temp;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++) cout<< arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={5,4,3,2,1};
    insertionSort(arr,5);
    print(arr,5);
}