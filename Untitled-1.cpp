#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,y,a,b;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    y=accumulate(arr,arr+n,0ll);
    a=max(accumulate(arr,arr+n-1,0ll),accumulate(arr+1,arr+n,0ll));
    ll sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
        a=max(sum,a);
    }
        for(int i=1;i<n;i++){
        sum=sum+arr[i];
        a=max(sum,a);
    }
    cout<<(y>a?"YES\n":"NO\n");
}