#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int k, x;
        cin >> k >> x;
        // 4 to 3
        if (k == 1)
        {
            if (x % 2)
            {
                x = x * 2;
            }
            else
            {
                x = (x - 1) / 3;
            }
            cout << x << endl;
        }
        else
        {
            while (--k)
            {
                if (x % 2 == 0)
                {
                    x = x * 2;
                }
                else
                {
                    x = (x - 1) / 3;
                }
            }
            if (x > 20)
            {
                x = (x - 1) / 3;
            }
            cout << x << endl;
        }
    }
}