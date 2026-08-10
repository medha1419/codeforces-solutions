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
            if(arr[i]<arr[0]){
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}