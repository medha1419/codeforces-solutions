#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int min=INT_MAX;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(abs(x)<min){
            min=abs(x);
        }
    }
    cout<<min;
}