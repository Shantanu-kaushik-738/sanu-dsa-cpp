#include <bits/stdc++.h>
// #include <map>
using namespace std;

int main()
{
    multimap<string, int> m;

    m.emplace("LAPTOP", 75);
    m.emplace("LAPTOP", 75);
    m.emplace("LAPTOP", 75);
    m.emplace("LAPTOP", 75);

    m.erase(m.find("LAPTOP"));

    for (auto p : m)
    {
        cout << p.first << " : " << p.second << endl;
    }

    return 0;
}
