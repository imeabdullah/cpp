#include<bits/stdc++.h>

using namespace std;
// approach 1
vector<int> removeDuplicate_1(vector<int> &input){
    vector<int> result;
    set<int> s;

    for(int i=0;i<input.size();i++){
        if(s.find(input[i])==s.end()){
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}

// approach 2
vector<int> removeDuplicate_2(vector<int> &input){
    vector<int> result;

    sort(input.begin(),input.end());

    result.push_back(input[0]);

    for(int i=1;i<input.size();i++){
        if(input[i]!=input[i-1]){
            result.push_back(input[i]);
        }
    }
    return result;
}
int main(){
    vector<int> input={1,1,2,2,3,4,4,5,5,6,6};

    vector<int> ans=removeDuplicate_2(input);

    for(auto it:ans)
        cout<<it<<" ";
    cout<<endl;
}