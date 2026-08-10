#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int min=b-a;
        for(int i=a;i<=b;++i){
            if((i-a)+(b-i)>min){
                min=(i-a)+(b-i);
            }
        }
        cout<<min<<endl;
    }
}