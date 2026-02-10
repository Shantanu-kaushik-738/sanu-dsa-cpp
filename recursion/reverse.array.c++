#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void reverse_an_array(int arr[], int size)
    {
        int st = 0;
        int lst = size - 1;

        while (st < lst)
        {
            swap(arr[st], arr[lst]);
            st++;
            lst--;
        }

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solution sol;
    sol.reverse_an_array(arr, n);

    return 0;
}