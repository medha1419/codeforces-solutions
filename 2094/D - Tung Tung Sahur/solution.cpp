#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        int k=0;
        int count=1;
        for(int i=0;i<p.size();++i){
            if(p[i]=='L'){
                int sizep=0;
                int sizek=0;
                int j=i;
                while(p[j]=='L'){
                    ++sizep;
                    ++j;
                }
                //cout<<sizep<<endl;
                while(s[k]=='L'){
                    ++sizek;
                    ++k;
                }
                //cout<<sizek<<endl;
                if(sizek<sizep || sizek>2*sizep){
                    count=0;
                    break;
                }
                i=i+sizep-1;
            }
            if(p[i]=='R'){
                int sizep=0;
                int sizek=0;
                int j=i;
                while(p[j]=='R'){
                    ++sizep;
                    ++j;
                }
                //cout<<sizep<<endl;
                while(s[k]=='R'){
                    ++sizek;
                    ++k; 
                }
                //cout<<sizek<<endl;
                if(sizek<sizep || sizek>2*sizep){
                    count=0;
                    break;
                }
                i=i+sizep-1;
            }
        }
        if(k!=s.size()){
            count=0;
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}