#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        int target;
        cin >> target;
        vector<int> path(n);
        for (int i = 0; i < n; i++)
        {
            cin >> path[i];
        }

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += path[i];
        }
        if (total > target)
        {
            for (int i = 0; i < n; i++)
            {
                cout << path[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}