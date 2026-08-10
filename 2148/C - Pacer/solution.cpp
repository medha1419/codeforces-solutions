#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int pos=0;
        int where=0;
        int points=0;
        for(int i=0;i<n;++i){
            int a,b;
            cin>>a>>b;
            if((a-pos)%2==0 && where==b){
                points+=a-pos;
            }
            else if((a-pos)%2==0 && where!=b){
                points+=a-pos-1;
            }
            else if((a-pos)%2!=0 && where==b){
                points+=a-pos-1;
            }
            else if((a-pos)%2!=0 && where!=b){
                points+=a-pos;
            }
            pos=a;
            where=b;
        }
        cout<<points+m-pos<<endl;
    }
}