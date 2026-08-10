#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string req;
        for(int i=0;i<3;++i){
            cin>>s;
            req+=s[0];
        }
        cout<<req<<endl;
    }
}