#include <iostream>
using namespace std;

int main()
{
    int ws;
    cin >> ws;
    if (ws % 2 == 0 && ws > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}