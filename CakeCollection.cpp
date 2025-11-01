#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int i = n - 1;
        while (i >= 0)
        {
            if (i == 0 && s > 0)
            {
                sum += arr[i] * s;
                break;
            }
            if (s == 0)
            {
                break;
            }
            sum += arr[i] * s;
            s--;
            i--;
        }
        cout << sum << endl;
    }
}