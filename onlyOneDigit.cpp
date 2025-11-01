#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        int mini = INT_MAX;
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++)
        {
            mini = min(mini, str[i] - '0');
        }
        cout << mini << endl;
    }
    return 0;
}