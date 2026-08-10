#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int initialones=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]==1){
            initialones++;
        }
    }
    for(int i=0;i<n;++i){
        if(arr[i]==1){
            arr[i]=-1;
        }
        else{
            arr[i]=1;
        }
    }
    int currentprof=0;
    int maxprof=INT_MIN;
    for(int i=0;i<n;++i){
        currentprof+=arr[i];
        if(currentprof>maxprof){
            maxprof=currentprof;
        }
        if(currentprof<0){
            currentprof=0;
        }
    }
    cout<<initialones+maxprof;
}