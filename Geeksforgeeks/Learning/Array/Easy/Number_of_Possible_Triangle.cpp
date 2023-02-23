#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int left = 0, right = i - 1;
        while (left < right)
        {
            if ((v[left] + v[right]) > v[i])
            {
                cnt += right - left;
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}