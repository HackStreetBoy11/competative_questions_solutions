#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(int sum, vector<int> &multiS)
{
    if (multiS.size() == 0)
        return;

    vector<int> sdash;
    sdash.push_back(multiS[0]);

    for (int i = 1; i < multiS.size(); i++)
    {
        if (multiS[i] != multiS[i - 1])
        {
            sdash.push_back(multiS[i]);
        }
    }

    int total = 0;
    for (int i = 0; i < sdash.size(); i++)
    {
        total += sdash[i];
    }
    int mex = 0;
    int large = sdash[sdash.size() - 1];
    int i = 0;
    // 0 1 1 3

    int hash[large + 1] = {0};
    for (int i = 0; i < sdash.size(); i++)
    {
        hash[sdash[i]]++;
    }
    bool check = false;
    for (int i = 0; i <= large; i++)
    {
        if (hash[i] == 0)
        {
            check = true;
            mex = i;
        }
    }
    if (check == false)
    {
        mex = large + 1;
    }
    sum += max(total, mex);
    for (int i = 0; i < sdash.size(); i++)
    {
        int value = sdash[i];
        for (int j = 0; j < multiS.size(); j++)
        {
            if (multiS[j] == value)
            {
                multiS.erase(multiS.begin() + j);
                break;
            }
        }
    }
    f(sum, multiS);
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> multiS(n);
        for (int i = 0; i < n; i++)
        {
            cin >> multiS[i];
        }
        sort(multiS.begin(), multiS.end());
        int sum = 0;

        f(sum, multiS);
        cout << sum;
    }
}