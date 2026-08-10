#include <bits/stdc++.h>
using namespace std;
 
void printasis(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
void printsort(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
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
        int odds=0;
        int evens=0;
        for(int i=0;i<n;++i){
            if(arr[i]%2==0){
                evens++;
            }
            else{
                odds++;
            }
        }
        if(odds==0 || evens==0){
            printasis(arr,n);
        }
        else{
            printsort(arr,n);
        }
    }
}