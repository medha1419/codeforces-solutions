#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        long long sum=0;
        long long arr[n];
        int j;
        for(int i=0;i<n;++i){
            cin>>arr[i];   
        }
        for(int i=0;i<n;++i){
            if(arr[i]>0){
                j=i;
                break;
            }  
        }
        for(int i=j;i<n;++i){
            if(arr[i]>0){
                sum+=arr[i];
            }
            else{
                if(abs(arr[i])>=sum){
                    sum=0;
                }
                else{
                    sum+=arr[i];
                }
            }
        }
        cout<<sum<<endl;
 
    }
}