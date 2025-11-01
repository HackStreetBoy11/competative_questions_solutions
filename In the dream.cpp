#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        // 4 1 4 1

        if (a > b && (a / 2) > (b + 1))
            cout << "NO" << endl;
        else if (b > a && (b / 2) > (a + 1))
            cout << "NO" << endl;
        else if (c > d && (c / 2) > (d + 1))
            cout << "NO" << endl;
        else if (d > c && (d / 2) > (c + 1))
            cout << "NO" << endl;
        else
        {
            cout << "yes" << endl;
        }
    }
}