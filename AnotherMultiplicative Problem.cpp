#include<iostream>
#include<math.h>
using namespace std;

long long fun(long long a,long long b)
{   long long temp = b;
    int count = 0;
    while(temp)
    {
        temp/=10;
        count++;
    }
    long long  tens = 1;
    for(int i =0;i<count;i++) tens*=10;
    return a*tens+b;
}
int funSum(long long num)
{
    int sum = 0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main(){
    int k;
    cin>>k;
    while (k--)
    {
        long long int a;
        cin>>a; // 8
        for(int  i =1;i<1e9;i++)
        {
            int num = fun(a,i);//concatinated number
            int sum = funSum(num);
            if(num%sum==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    
}