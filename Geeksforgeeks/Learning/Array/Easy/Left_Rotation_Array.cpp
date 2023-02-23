#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int q;
    cin >> q;
    // cout << q << endl;
    // for(int i = q;i<n;i++)
    // {
    //     temp.push_back(v[i]);
    // }
    // for(int j = 0;j<q;j++)
    // {
    //     temp.push_back(v[j]);
    // }
    // for(auto &i : temp)
    // {
    //     cout<<i<<" ";
    // }
    while (q--)
    {
        int x;
        cin >> x;
        x = x % n;
        vector<int> temp;
        temp = v;
        /* Using STL inbuild syntax */
        rotate(temp.begin(), temp.begin() + x, temp.end());
        /* Using Loop */
        // for (int i = x; i < n; i++)
        // {
        //     temp.push_back(v[i]);
        // }
        // for (int j = 0; j < x; j++)
        // {
        //     temp.push_back(v[j]);
        // }
        for (auto &i : temp)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}