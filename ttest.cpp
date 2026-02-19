#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxs = 0;
        int curs = 0;
        for (int i = 0; i < n; i++)
        {
            curs += nums[i];
            maxs = max(maxs, curs);
            if (curs < 0)
            {
                curs = 0;
            }
        }
        return maxs;
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
    cout << sol.maxSubArray(vec) << endl;

    return 0;
}