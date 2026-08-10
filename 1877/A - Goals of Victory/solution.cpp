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
        long long int sum=0;
        for(int i=0;i<n-1;++i){
            int x;
            cin>>x;
            //cout<<x<<endl;
            sum+=x;
        }
        cout<<-1*sum<<endl;
    }
}