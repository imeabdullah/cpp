#include<iostream>

using namespace std;

void merge(int arr[],int s,int mid,int e)
{
    int b[(e-s)+1];
    //cout<<"New size:"<<(e-s)+1<<endl;
    int i=s;
    int j=mid+1;
    int k=0;

    while(i<=mid and j<=e)
    {
        if(arr[i] < arr[j])
        {
            b[k++]=arr[i++];
        }
        else
        {
            b[k++]=arr[j++];
        }
    }

    if(i>mid)
    {
        while(j<=e)
            b[k++]=arr[j++];
    }

    if(j>e)
    {
        while(i<=mid)
            b[k++]=arr[i++];
    }

    for(i=0,j=s;j<=e;j++,i++)
    {
        arr[j]=b[i];
    }
}

void mergeSort(int arr[],int s,int e)
{
    if(s<e)
    {
        int mid=(s+e)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1,e);

        merge(arr,s,mid,e);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Before Merge Sort:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    mergeSort(arr,0,n-1);
    
    cout<<"After Merge Sort:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}