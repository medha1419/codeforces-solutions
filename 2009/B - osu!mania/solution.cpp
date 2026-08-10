#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        string s;
        for(int j=0;j<n;++j){
            cin>>s;
            for(int i=0;i<4;++i){
                if(s[i]=='#'){
                    arr[n-j-1]=i+1;
                    break;
                }
            }
        }
        for(int k=0;k<n;++k){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}