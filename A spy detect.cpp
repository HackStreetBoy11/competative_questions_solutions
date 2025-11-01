#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n ;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int majority;
        if(arr[0]==arr[1] || arr[0]==arr[2])
        {
            majority = arr[0];
        }
        else{
            majority = arr[1];
        }
        for(int i =0;i<n;i++)
        {
            if(majority!=arr[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}