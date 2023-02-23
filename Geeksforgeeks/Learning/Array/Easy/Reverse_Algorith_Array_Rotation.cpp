#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }
    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.end());
    reverse(v.begin(),v.end());
    for(auto &j: v)
    {
        cout<<j<<" ";
    }
    return 0;
}