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
        int pos=0;
        int neg=0;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            if(x==1){
                pos++;
            }
            else{
                neg++;
            }
        }
        int ops=0;
        if(neg>pos){
            int k=(neg-pos+1)/2;
            ops+=k;
            neg-=k;
        }
        if(neg%2==1){
                ops++;
            }
        cout<<ops<<endl;    
    }
        
}