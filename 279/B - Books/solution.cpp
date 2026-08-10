#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int sum=0;
    int low=0,high=0;
    int len=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        high++;
        while(sum>t){
            sum-=arr[low];
            low++;
        }
        len=max(len,high-low);
    }
    cout<<len;
}