#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec(4, 10);

    /* vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);
    vec.emplace_back(5);*/

    cout << vec[2] << endl;
    cout << vec.at(3) << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;

    return 0;
}
