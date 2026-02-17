#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        int i = 0, j = 0;

        vector<int> ans;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] <= nums2[j])
            {
                if (ans.size() == 0 || ans.back() != nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                i++;
            }
            else
            {
                if (ans.empty() || ans.back() != nums2[j])
                {
                    ans.push_back(nums2[j]);
                }
                j++;
            }
        }
        while (i < nums1.size())
        {
            if (ans.empty() || ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }
            i++;
        }
        while (j < nums2.size())
        {
            if (ans.empty() || ans.back() != nums2[j])
            {
                ans.push_back(nums2[j]);
            }
            j++;
        }

        return ans;

        // set<int> st;
        // for (int i = 0; i < nums1.size(); i++)
        // {
        //     st.insert(nums1[i]);
        // }
        // for (int i = 0; i < nums2.size(); i++)
        // {
        //     st.insert(nums2[i]);
        // }

        // vector<int> result;
        // for (auto it : st)
        // {
        //     result.push_back(it);
        // }
        // return result;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    vector<int> vec2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec2[i];
    }

    Solution sol;
    vector<int> vec = sol.unionArray(vec1, vec2);

    for (auto v : vec)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}