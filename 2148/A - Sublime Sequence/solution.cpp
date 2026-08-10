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
        if(b%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
}