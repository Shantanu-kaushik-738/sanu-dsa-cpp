#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p = {7, '$'};
    pair<int, pair<string, char>> pp = {7, {"sanu", 'K'}};

    cout << p.first << endl;
    cout << p.second << endl;

    cout << pp.first << endl;
    cout << pp.second.first << endl;
    cout << pp.second.second << endl;

    return 0;
}
