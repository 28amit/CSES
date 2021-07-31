//
// Created by Amit.
//
#include "bits/stdc++.h"
#define int long long
#define MOD 1000000007
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

bool comp(vector<int>a,vector<int>b){
    if(a[0]==b[0])
        return a[1]>b[1];
    return a[0]<b[0];
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    /* code */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int> > v(n, vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1];
        v[i][3]=i;
    }
    sort(v.begin(), v.end(),comp);
    int maxr=INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i][1]>)
    }
}