#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto &i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first << " ";
        }
    }
    return 0;
}