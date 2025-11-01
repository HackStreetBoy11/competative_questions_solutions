#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Yes" << endl;
    }
}