#include<bits/stdc++.h>

using namespace std;

bool isMatch(string s, string p) {
    int n = s.size();
    int m = p.size();

    for(int i = 0;i<=(n - m);i++) {
        bool f = 1;
        for(int j = 0;j<m;j++) {
            if(s[i+j] != p[j]) {
                f = 0;
                break;
            }
        }
        if(f) {
            return true;
        }
    }
    return false;
}

bool isMatching(string s, string p) {
    int n = s.size();
    int m = p.size();

    for(int i = 0;i<=(n - m);i++) {
        bool f = 1;
        int k = 0;
        for(int j = i;j<n and k < m;j++) {
            if(p[k++] != s[j]) {
                f = 0;
                break;
            }
        }
        if(f) {
            return true;
        }
    }
    return false;
}

int32_t main() {
    string s, p;
    cin >> s >> p;
    cout << isMatching(s, p) << endl;
}