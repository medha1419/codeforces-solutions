#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,H,M;
        cin>>n>>H>>M;
        int a=24;
        int b=00;
        int leasta,leastb;
        for(int i=0;i<n;++i){
            int h,m;
            cin>>h>>m;
            if((h>H || (h==H && m>=M)) && (h<a || (h==a && m<=b))){
                a=h;
                b=m;
            }
            if(i==0){
                leasta=h;
                leastb=m;
            }
            else if(h<leasta || (h==leasta && m<=leastb)){
                leasta=h;
                leastb=m;
            }
        }
        int finalhours,finalmins;
 
        if(a==24){
            if(M==0){
                finalhours=24-H+leasta;
                finalmins=leastb;
            }
            else{
                finalhours=23-H+leasta;
                finalmins=60-M+leastb;
                if(finalmins>=60){
                    finalmins%=60;
                    finalhours++;
                }
            }
        }
 
        else{
 
            if(b<M){
                finalmins=60+b-M;
                finalhours=a-1-H;
            }
            else{
                finalmins=b-M;
                finalhours=a-H;
            }
        }
        cout<<finalhours<<" "<<finalmins<<endl;
    }
}