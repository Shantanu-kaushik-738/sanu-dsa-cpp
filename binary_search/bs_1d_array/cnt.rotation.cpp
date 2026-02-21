#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        int st = 0, end = arr.size() - 1;
        int ans = INT_MAX;
        int idx = -1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (arr[st] <= arr[end])
            {
                if (arr[st] < ans)
                {
                    idx = st;
                    ans = arr[st];
                }
            }

            if (arr[st] <= arr[mid])
            {
                if (arr[st] < ans)
                {
                    idx = st;
                    ans = arr[st];
                }
                st = mid + 1;
            }
            else
            {
                if (arr[st] < ans)
                {
                    idx = mid;
                }
                end = mid - 1;
            }
        }
        return idx;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    Solution sol;
    cout << sol.findKRotation(vec);

    return 0;
}