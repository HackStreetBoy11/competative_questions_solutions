#include <iostream>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        long long a, b;
        cin >> a >> b;

        long long max_sum = -1;

        for (long long i = 1; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                long long k1 = i;
                long long k2 = b / i;

                long long sum1 = (a * k1) + (b / k1);
                if (sum1 % 2 == 0)
                {
                    max_sum = max(max_sum, sum1);
                }
                if (k1 != k2)
                {
                    long long sum2 = (a * k2) + (b / k2);
                    if (sum2 % 2 == 0)
                    {
                        max_sum = max(max_sum, sum2);
                    }
                }
            }
        }
        
            cout << max_sum << endl;
    }
}