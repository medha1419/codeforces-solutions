#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=0;
        int y=9;
        while(x!=0){
            a=x%10;
            x/=10;
            if(a<y){
                y=a;
            }
        }
        cout<<y<<endl;
    }
}