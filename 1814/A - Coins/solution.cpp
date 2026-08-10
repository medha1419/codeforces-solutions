#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"yes"<<endl;
        }
        else{
            if(k%2==0){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
    }
}