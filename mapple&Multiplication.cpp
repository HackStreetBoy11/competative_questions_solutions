#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        // {1,2}  {4,5}  {10,3}
        else if (a < b)
        {
            if ((b % a) == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        { // a>b
            if ((a % b) == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}