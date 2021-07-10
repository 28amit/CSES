//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(), a.end())
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    while (v.size() > 1)
    {
        vector<int> s;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 1)
            {
                cout << v[i] << " ";
            }
            else{
                s.push_back(v[i]);
            }
        }
        if(v.size()%2==0){
            v=s;
        }
        else{
            int start=s.back();
            s.pop_back();
            v.clear();
            v.push_back(start);
            for(int i=0;i<s.size();i++){
                v.push_back(s[i]);
            }
        }
    }
    cout<<v[0];
}