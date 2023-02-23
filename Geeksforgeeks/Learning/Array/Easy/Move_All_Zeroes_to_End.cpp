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
    // for (int j = 0;j<n;j++)
    // {
    //     cout << v[j] << " ";
    // }
    vector<int> temp;
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    for (int i = 0; i < n; i++)
    { 
        if ((i + 1) % 2 == 0)
        {
            temp.push_back(v[right]);
            right--;
        }
        else
        {
            temp.push_back(v[left]);
            left++;
        }
    }
    v = temp;
    for (auto &j : v)
    {
        cout << j << " ";
    }
    return 0;
}