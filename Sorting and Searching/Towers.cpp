//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(),a.end())
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

int32_t main() {
#ifndef ONLINE_JUDGE
    /* code */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n;
    multiset<int>s;
    for(int i=0;i<n;i++){
        cin>>k;
        auto it=s.upper_bound(k);
        if(it==s.end())
            s.insert(k);
        else{
            s.erase(it);
            s.insert(k);
        }
    }
    cout<<s.size();


    
}