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
    int x,n,k;
    cin >> x>>n;
    set<int>s;
    s.insert(0);
    s.insert(x);
    multiset<int>ms;
    ms.insert(x);
    for(int i=0;i<n;i++){
        cin>>k;
        auto it1=s.lower_bound(k);
        auto it2=it1;
        --it2;
        ms.erase(ms.find(*it1-*it2));
        ms.insert(k-*it2);
        ms.insert(*it1-k);
        cout<<*--ms.end()<<" ";
        s.insert(k);
    }

}
