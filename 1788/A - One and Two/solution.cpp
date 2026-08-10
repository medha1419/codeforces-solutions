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
        int twos=0;
        int check=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]==2){
                check=1;
                twos++;
            }
        }
        if(check==0){
            cout<<1<<endl;
        }
        else{
            int cur=0;
        int k=-1;
        for(int i=0;i<n-1;++i){
            if(arr[i]==2){
                cur++;
            }
            if(cur==twos-cur){
                k=i+1;
                break;
            }
        }
        cout<<k<<endl;
        }
    }
}