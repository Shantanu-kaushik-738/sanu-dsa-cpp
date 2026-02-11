#include <bits/stdc++.h>
// #include<list>       /* doubly linked list */
using namespace std;

int main()
{
    list<int> ls /*ls = {1,2,3,4}*/;

    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    ls.push_front(1);

    ls.pop_back();
    ls.pop_front();

    for (int v : ls)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
