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
    vector<int> even,odd;
    int left = 0,right = v.size() - 1;
    for(int i = 0;i<n;i++)
    {
        if(v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    v.clear();
    // v.resize(even.size() + odd.size());
    v.insert(v.begin(),even.begin(),even.end());
    v.insert(v.end(),odd.begin(),odd.end());
    for(auto &j:v)
    {
        cout<<j<<" ";
    }
    return 0;
}