#include <bits/stdc++.h>
using namespace std;
 
int sumf(int n){
    int sum=0;
    for(int i=0;i<=n;++i){
        sum+=i;
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b,c;
    cin>>a>>b>>c;
    int sum=a*sumf(c);
    if(sum>b){
        cout<<sum-b;
    }
    else{
        cout<<0;
    }
}