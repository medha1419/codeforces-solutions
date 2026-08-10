#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int checkcount=1;
        int checkt=0;
        int checkm=0;
        for(int i=0;i<n;++i){
            if(s[i]=='T'){
                checkt++;
            }
            else{
                checkm++;
            }
        }
        if(checkt!=2*checkm){
            checkcount=0;
        }
        int countt1=0;
        int countm1=0;
        int checkfront=1;
        for(int i=0;i<n;++i){
            if(s[i]=='T'){
                countt1++;
            }
            else if(s[i]=='M'){
                countm1++;
                if(countt1<countm1){
                    checkfront=0;
                    break;
                }
            }
        }
        int countt2=0;
        int countm2=0;
        int checkback=1;
        for(int i=0;i<n;++i){
            if(s[n-1-i]=='T'){
                countt2++;
            }
            else if(s[n-1-i]=='M'){
                countm2++;
                if(countt2<countm2){
                    checkback=0;
                    break;
                }
            }
        }
        if(checkcount==1 && checkfront==1 && checkback==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}