#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<n;++i){
            if(arr[i]<min){
                min=arr[i];
            }
            else if(arr[i]>max){
                max=arr[i];
            }
        }
        int sum=min+max;
        for(int i=0;i<n;++i){
            cout<<sum-arr[i]<<" ";
        }
        cout<<endl;
    } 
}