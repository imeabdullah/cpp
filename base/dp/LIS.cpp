#include<bits/stdc++.h>

using namespace std;
int lis(int arr[],int n){
    int output[n];
    output[0]=1;

    for(int i=1;i<n;i++) {
        output[i]=1;
        for(int j=i-1;j>=0;j--) {
            if(arr[j] > arr[i]) continue;

            int possibleAns=arr[j]+1;
            if(possibleAns > output[i])
                output[i] = possibleAns;
        }
    }
    int best=0;
    for(int i=0;i<n;i++) {
        if(best < output[i])
            best = output[i];
    }
    return best;
}
int main(){
    int arr[]={1,2,4,2,3};
    cout<<lis(arr,5)<<endl;
}