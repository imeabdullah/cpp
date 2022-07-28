#include<iostream>

using namespace std;

int partition(int arr[],int s,int e)
{
    int count=0;
    for(int i=s;i<=e;i++)
    {
        if(arr[i]<arr[s]) count++;
    }

    int temp=arr[s];
    arr[s]=arr[s+count];
    arr[s+count]=temp;

    int i=s;
    int j=e;
    while(i<(s+count) and j>(s+count))
    {
        if(arr[i]<arr[s+count])
        {
            i++;
        }
        else if(arr[j]>arr[s+count])
        {
            j--;
        }
        else
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

    return s+count;
}

void quickSort(int arr[],int s,int e)
{
    if(s<e)
    {
        int c=partition(arr,s,e);
        quickSort(arr,s,c-1);
        quickSort(arr,c+1,e);
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<< " ";
    cout<<endl;
}
int main()
{
    int arr[]={5,4,3,2,1};

    quickSort(arr,0,4);
    print(arr,5);
}