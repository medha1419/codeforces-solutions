#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int max=arr[0];
        for(int i=1;i<n;++i){
            if(arr[i]-arr[i-1]>max){
                max=arr[i]-arr[i-1];
            }
        }
        if(2*(x-arr[n-1])>max){
            max=2*(x-arr[n-1]);
        }
        cout<<max<<endl;
    }
}