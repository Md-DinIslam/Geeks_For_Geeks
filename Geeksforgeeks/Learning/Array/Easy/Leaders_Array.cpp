#include <bits/stdc++.h>
using namespace std;
void PrintVec()
{
    int n;
    cin >> n;
    vector<int> v(n), temp;
    for (auto &x : v)
    {
        cin >> x;
    }
    int Max_val = v[v.size() - 1];
    cout << Max_val << " ";
    temp.push_back(Max_val);
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (Max_val < v[i])
        {
            Max_val = v[i];
            cout << Max_val << " ";
            temp.push_back(Max_val);
        }
    }
    // reverse(temp.begin(), temp.end());
    // for (auto &i : temp)
    // {
    //     cout << i << " ";
    // }
}
void PrintStack()
{
    int n;
    cin >> n;
    vector<int> v(n), temp;
    for (auto &x : v)
    {
        cin >> x;
    }
    int size = v.size();
    stack<int> st;
    st.push(v[size - 1]);
    for (int i = size - 2; i >= 0; i--)
    {
        if (st.top() < v[i])
        {
            st.push(v[i]);
        }
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    // PrintVec();
    PrintStack();
    return 0;
}