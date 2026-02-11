#include <bits/stdc++.h>
// #include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    m["TV"] = 100;
    m["LAPTOP"] = 50;
    m["TABLET"] = 120;
    m["WATCH"] = 80;

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
