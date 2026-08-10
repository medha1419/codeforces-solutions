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
        int max=0;
        int len=0;
        if(arr[0]==0){
            len=1;
            max=1;
        }
        for(int i=1;i<n;++i){
            if(arr[i]==0 && arr[i-1]==1){
                len=1;
            }
            else if(arr[i]==arr[i-1] && arr[i]==0){
                len++;
            }
            else if(arr[i]==1 && arr[i-1]==0){
                len=0;
            }
            if(len>max){
                max=len;
            }
        }
        cout<<max<<endl;
    }
}