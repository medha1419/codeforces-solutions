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
        int check=0;
        for(int i=1;i<n;++i){
            if(arr[i]<arr[i-1]){
                check=1;
                break;
            }
        }
        if(check==1){
            cout<<0<<endl;
        }
        else{
            int min=INT_MAX;
            for(int i=1;i<n;++i){
                if(arr[i]-arr[i-1]<min){
                    min=arr[i]-arr[i-1];
                }
            }
            if(min%2==0){
                cout<<(min/2)+1<<endl;
            }
            else{
                cout<<(min+1)/2<<endl;
            }
        }
    }
}