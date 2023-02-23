#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // vector<int>::iterator i = v.begin();
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(v[i], v[i + 1]);
    }
    for (auto &j : v)
    {
        cout << j << " ";
    }
    return 0;
}