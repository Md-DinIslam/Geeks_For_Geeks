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
    vector<int> temp;
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    for(int i = 0;i<n;i++)
    {
        if(i % 2 == 0)
        {
            temp.push_back(v[right--]);
        }
        else{
            temp.push_back(v[left++]);
        }
    }
    for(auto &i :temp)
    {
        cout<<i<<" ";
    }
    return 0;
}