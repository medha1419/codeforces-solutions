#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int x,y;
    if(a%c==0){
        x=a/c;
    }
    else{
        x=a/c+1;
    }
    if(b%c==0){
        y=b/c;
    }
    else{
        y=b/c+1;
    }
    cout<<x*y;
}