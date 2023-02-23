#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // for(int i = 0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end(), greater<int>());
    // for(auto & i: v)
    // {
    //     cout<<i<<" ";
    // }
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}