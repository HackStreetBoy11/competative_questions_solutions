#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int k;
    cin>>k;
    while (k--)
    {
        int n;
        cin>>n;
        vector<int>arr(n,0);
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            pq.push(arr[i]);
        }
        cout<<pq.top()<<endl;
}
    return 0;
}