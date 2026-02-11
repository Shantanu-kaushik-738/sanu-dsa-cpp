#include <bits/stdc++.h>
// #include <map>
using namespace std;

int main()
{
    map<string, int> m;

    m["TV"] = 100;
    m["LAPTOP"] = 50;
    m["HEADPHONES"] = 100;
    m["TABLET"] = 120;
    m["WATCH"] = 80;

    m.emplace("CAMERA", 75);
    m.erase("TV");

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
