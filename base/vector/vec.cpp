#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // 2d Dynamic vector
    vector<vector<double>> *table ;
    table = new vector<vector<double>> ( n, vector<double>( n, 0.0)) ;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << (*table)[i][j] <<" "; 
        }
        cout<<endl;
    }
    
}
