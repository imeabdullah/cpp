#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define all(v)      v.begin(),v.end()
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7
//---------------------------macros-----------------------------

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { 
    if(n == 2 or n == 3) return true; 
    if(n % 2 == 0 or n % 3 == 0) return false;
   
    ll root =(ll) sqrt(n) + 1; 
    ll count = 0; 
    for(int i = 2;i<=root;i++) { 
        if(n % i == 0) {
            if(n % i == i)  
                count++; 
            else 
                count +=2; 
        } 
    } 
    if(count > 0) return false;
    else return true;
}
vector<string> split(string s,char c) {
    vector<string> ans;
    for(int i = 0;i<s.length();) {
        int j = i;
        while(s[j] != c and j < s.length()) {
            j++;
        }
        ans.push_back(s.substr(i,(j-i)));
        i = j+1;
    }
    return ans;
}
inline string toLower(string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }
inline string toUpper(string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
//---------------------------Useful Functions-----------------------------
ll n, m, k;
string s;
//---------------------------global variables-----------------------------
// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};


vector<pair<ll,ll>> countFactorInFactorial(ll x) {
    vector<pair<ll,ll>> ans;

    for(int i = 2;i<=x;i++) {
        if(prime(i)) {
            int p = i;
            ll sub1 = 0;
            while(true) {
                ll sub = x / p;
                if(sub < 1) {
                    break;
                } else {
                    sub1 += sub;
                    p = p * i;
                }
            }
            ans.push_back({i,sub1});
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<ll,ll>> ans = countFactorInFactorial(n);

    for(auto it:ans) cout << it.ff << " ^ " << it.ss << endl;
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
    
}