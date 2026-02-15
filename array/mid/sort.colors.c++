#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortZeroOneTwo(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    Solution sol;
    sol.sortZeroOneTwo(vec);

    for(auto v: vec){
        cout << v<<" ";
    }
    return 0;
}