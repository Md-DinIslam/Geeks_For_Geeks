#include <bits/stdc++.h>
using namespace std;
#define vt vector<int>
#define ll lon long
#define map map<int, int>
#define pr pair<int, int>
#define vtp vector<pair<int, int>>
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int n;
    cin >> n;
    // vt v(n),idx(n);
    int ar[n], idx[n];
    // for(auto &x:v) cin>>x;
    // for(auto &i:v) cout<<i<<" ";
    map mp;
    pr p;
    vtp vp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> idx[i];
    }
    for (int i = 0; i < n; i++)
    {
        // vp.push_back({idx[i], ar[i]});
        // mp[ar[i]] = idx[i];
        mp[idx[i]] = ar[i];
    }
    for (auto &it : mp)
    {
        cout << it.second << " ";
    }
    cout << endl;
    for (auto &it : mp)
    {
        cout << it.first << " ";
    }
    cout << endl;
    return 0;
}