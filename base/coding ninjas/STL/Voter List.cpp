#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1,n2,n3; cin>>n1>>n2>>n3;
    int arr[n1+n2+n3];
    
    for(int i=0;i<(n1+n2+n3);i++){
        cin>>arr[i];    
    }
    
    sort(arr,arr+(n1+n2+n3));
    vector<int> ans;
    int unique_count=0;
    for(int i=0;i<(n1+n2+n3);){
        int j=i;
        int count=0;
        
        while(j<(n1+n2+n3) and arr[i]==arr[j]){
            j++;
            count++;
        }
        
        if(count>=2){
            ans.push_back(arr[i]);
        }
        i=j;
    }
    cout<<ans.size()<<endl;
    
    for(auto it:ans) cout<<it<<endl;
}

int main() {
    solve();
	return 0;
}
