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
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
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

vector<pair<int,int>> primeFactor(ll n) {
    ll root = (ll) sqrt(n);
    root++;
    vector<pair<int,int>> ans;
    for(int i = 2;i<=root;i++) {
        if(n % i == 0) {
            int cnt(0);
            while(n % i == 0) {
                n /= i;
                cnt++;
            }
            ans.push_back({i,cnt});
        }
    }
    return ans;
}

ll count_factor(ll n) {
    vector<pair<int,int>> pr = primeFactor(n);

    ll ans = 1;
    for(int i=0;i<pr.size();i++) {
        int prN = pr[i].ss + 1;
        ans *= prN;
    }
    return ans;
}

ll sum_of_factor(ll n) {
    vector<pair<int,int>> pr = primeFactor(n);
    ll ans = 1;
    for(int i = 0;i<pr.size();i++) {
        int prime = pr[i].ff;
        int power = pr[i].ss;
        ans *= ((pow(prime,power+1) -1) / (prime - 1));
    }
    return ans;
}
void solve() {
    cout << count_factor(24) << endl;
    cout << sum_of_factor(24) << endl;
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
    
    // vector<string> ans = split("a|b|c|d|e|f",'|');
    // for(auto it:ans) {
    //     cout << it << " ";
    // }
    // cout << endl;
}