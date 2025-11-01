#include <iostream>
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
        vector<int> arr1(n);
        vector<int> arr2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        vector<int> diffArr(n);
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            diffArr[i] = abs(arr1[i] - arr2[i]);
            maxi = max(maxi, diffArr[i]);
        }
        if(n==1 || maxi == 0)
        {
            cout<<maxi+1<<endl;
        }
        else{
            cout<<maxi<<endl;
        }
    }
}