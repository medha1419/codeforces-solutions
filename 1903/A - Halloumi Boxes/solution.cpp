#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int check=0;
        int arr[a];
        for(int i=0;i<a;++i){
            cin>>arr[i];
        }
        for(int i=1;i<a;++i){
            if(arr[i]<arr[i-1]){
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }
        else{
            if(b>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
        }
        
    }
}