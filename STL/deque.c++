#include <bits/stdc++.h>
// #include<deque>       /* double ended queue */
using namespace std;

int main()
{
    deque<int> d /*d = {1,2,3,4}*/;

    d.push_back(3);
    d.emplace_back(4);
    d.push_front(2);
    d.push_front(1);

    d.pop_back();
    d.pop_front();

    for (int v : d)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
