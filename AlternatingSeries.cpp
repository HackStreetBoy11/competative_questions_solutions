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
        vector<int> ans(n,-1);
        ans[1] = n;
        int val = n/2;
        for(int i=1;i<n;i=i+2)
        {
            if(i==1)continue;
            ans[i] = val;
            val--; 
        }
        for(int i =0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}