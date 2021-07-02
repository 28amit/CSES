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
    // 1 2 5 7
    int n,x;
    cin >> n>>x;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(mp.count(x-v[i])){
            cout<<i+1<<" "<<mp[x-v[i]]<<endl;
            return 0;
        }
        mp[v[i]]=i+1;
    }
    cout << "IMPOSSIBLE" << '\n';
    
}