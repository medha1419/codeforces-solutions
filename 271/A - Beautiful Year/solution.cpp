#include <bits/stdc++.h>
using namespace std;
 
bool distinct(int n){
    string s=to_string(n);
    for(int i=1;i<4;++i){
        for(int j=0;j<i;++j){
            if(s[i]==s[j]){
                return 0;
            }
        }
    }
    return 1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(true){
        ++n;
        if(distinct(n)){
            cout<<n;
            break;
        }
    }
}