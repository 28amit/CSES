//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(, a.end()))
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

vector<string> solve(int n)
{
    if (n == 1)
    {
        vector<string>res={"0","1"};
        return res;

    }
    vector<string> tmp = solve(n - 1);
    vector<string>ans;
    for(int i=0;i<tmp.size();i++){
        ans.push_back("0"+tmp[i]);
    }
    for(int i=tmp.size()-1;i>=0;i--){
        ans.push_back("1"+tmp[i]);
    }
    return ans;
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
    vector<string> v = solve(n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}