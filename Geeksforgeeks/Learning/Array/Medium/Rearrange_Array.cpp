#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (auto &x : v)
    {
        cin >> x;
    }
    // Time Complexity: O(N)
    int i = 0;
    while (i < size)
    {
        int indx = v[i];
        if (v[i] != -1 && v[i] != v[indx])
        {
            swap(v[i], v[indx]);
        }
        else
        {
            i++;
        }
    }
    for (auto &i : v)
    {
        cout << i << " ";
    }
    return 0;
}