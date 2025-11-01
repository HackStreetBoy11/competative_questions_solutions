#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        int c;
        cin >> c;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        c = c* n;
        int coins = 0;
        int rep = n;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            nums[i] = nums[i] * pow(2, n - 1);
        }

        while (rep--)
        {
            bool check = true;
            for (int i = n - 1; i >= 0; i--)
            {
                if (nums[i] <= c && check)
                {
                    nums.erase(nums.begin() + i);
                    check = false;
                    continue;
                }
                nums[i] = nums[i] / 2;
            }
            if (check)
            {
                coins++;
                nums.erase(nums.begin());
            }
        }
        cout << coins << endl;
    }
}