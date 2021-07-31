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
    int n,s;
    cin >> n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>dp(s+1);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=s;j++){
            if((j-v[i])>=0){
                dp[j]=(dp[j]+dp[j-v[i]])%MOD;
            }
        }
    }
    cout<<dp[s];
}