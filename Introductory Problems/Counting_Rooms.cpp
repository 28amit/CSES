//
// Created by Amit.
//
#include "bits/stdc++.h"
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(,a.end()))
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

int n,m,rooms;
vector<vector<bool> >v;
vector<pair<int,int> >moves= {{-1,0},{1,0},{0,-1},{0,1}};

bool isvalid(int i,int j){
    if(i<0 || i>=n ||j<0||j>=m )
        return false;
    if(v[i][j])
        return false;
    return true;
}

void dfs(int i,int j){
    v[i][j]=true;
    for(auto p:moves){
        if(isvalid(i+p.first,j+p.second))
            dfs(i+p.first,j+p.second);
    }
}


int32_t main() {
#ifndef ONLINE_JUDGE
    /* code */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n>>m; 
    v.resize(n);
    for(int i=0;i<n;i++){
        v[i].resize(m);
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char tmp;
            cin>>tmp;
            if(tmp=='#')
                v[i][j]=true;
            else
                v[i][j]=false;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!v[i][j]){
                dfs(i,j);
                rooms++;
            }
        }
    }
    cout<<rooms;
}