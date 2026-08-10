#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int> mp1;
        for(int i=0;i<n;++i){
            mp1[s[i]]++;
        }
        unordered_map<char,int> mp2;
        for(int i=0;i<n;++i){
            mp2[t[i]]++;
        }
        int check=0;
        for (const auto& [key, value] : mp1){
            if(mp2[key]!=value){
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}