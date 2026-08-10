#include <bits/stdc++.h>
using namespace std;
 
const int N= 2e5+1;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int count[N]={};
        int less=0;
        int equal=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            count[arr[i]]++;
            if(arr[i]==k){
                equal++;
            }
        }
        for(int i=0;i<k;++i){
            if(count[i]==0){
                less++;
            }
        }
        cout<<max(less,equal)<<endl;
    }
}