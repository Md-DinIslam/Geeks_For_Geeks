#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    cout << v[n - 2];
    return 0;
}