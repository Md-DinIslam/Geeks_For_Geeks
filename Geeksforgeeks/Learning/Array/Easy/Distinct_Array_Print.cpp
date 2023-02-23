#include <bits/stdc++.h>
using namespace std;
void PrintSet()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    unordered_set<int> s;
    // set<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }
    // for (auto &i : s)
    // {
    //     cout << i << " ";
    // }
    for (int i = 0; i < n; i++)
    {
        if (!s.count(v[i]))
        {
            s.insert(v[i]);
            cout << v[i] << " ";
        }
    }
}
void PrintVec()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    // unordered_set<int> s(v.begin(),v.end());
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v[i + 1])
        {
            cout << v[i] << " ";
        }
    }
    // for( auto &i:s)
    // {
    //     cout<<i<<" ";
    // }
}
void PrintMap()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert({v[i], i});
    }
    for (auto &i : mp)
    {
        cout << i.first << " ";
    }
}
int main()
{
    /* Order Maintain */
    // PrintSet();
    /* Sorting Order */
    // PrintVec();
    PrintMap();
    return 0;
}