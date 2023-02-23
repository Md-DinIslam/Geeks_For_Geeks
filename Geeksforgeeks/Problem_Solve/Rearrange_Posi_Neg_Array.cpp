#include <bits/stdc++.h>
using namespace std;
#define vt vector<int>
int main()
{
    int n;
    cin >> n;
    vt v(n);
    for (auto &x : v)
        cin >> x;
    int step = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            step++;
            swap(v[i], v[step]);
        }
    }
    int positive = step + 1, negative = 0;
    while (positive < n && negative < positive && v[negative] < 0)
    {
        swap(v[negative], v[positive]);
        positive++;
        negative += 2;
    }
    for(auto &i: v)
    cout<<i<<" ";
    return 0;
}