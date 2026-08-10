#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int counter=0;
        int peaks=0;
        for(int i=0;i<n;++i){
            if((i==0 && arr[i]==0) || (arr[i]==0 && arr[i-1]==1)){
                counter=1;
            }
            else if(arr[i]==0 && arr[i-1]==0){
                counter++;
            }
            if(counter==k){
                peaks++;
                i++;
                counter=0;
            }
            if(arr[i]==1){
                counter=0;
            }
        }
        cout<<peaks<<endl;
    }
}