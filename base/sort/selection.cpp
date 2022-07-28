#include<iostream>

using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_ind]>arr[j])
                min_ind=j;
        }
        if(min_ind!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min_ind];
            arr[min_ind]=temp;

        }
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
    selectionSort(arr,5);
    print(arr,5);
}