#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        string s,t;
        cin>>a;
        cin>>s;
        cin>>b;
        cin>>t;
        string order;
        cin>>order;
        for(int i=0;i<order.size();++i){
            if(order[i]=='V'){
                s=t[i]+s;
            }
            else{
                s+=t[i];
            }
        }
        cout<<s<<endl;  
    }
}