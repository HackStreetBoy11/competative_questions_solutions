#include<iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    while (k--)
    {
        int a,n;
        cin>>a;
        cin>>n;

        if(n%2==0)
        {
            cout<<0<<end;
        }
        else
        {
            cout<<a<<endl;
        }
    }
}