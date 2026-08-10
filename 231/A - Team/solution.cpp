#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int prob=0;
    for(int i=0;i<n;++i){
        int sum=0;
        for(int j=0;j<3;++j){
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum>=2){
            prob++;
        }
    }
    cout<<prob;
}