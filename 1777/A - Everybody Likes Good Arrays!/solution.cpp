#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n;
    while(t--){
        vector<int> vec;
        cin>>n;
        int ops=0;
        int j=0;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            if(j>0 && x%2==vec[j-1]){
                if(x%2==0){
                    vec[j - 1]=0;
                }
                else{
                    vec[j - 1]=1;
                }
                ++ops;
            }
            else{
                if(x%2==0){
                    vec.push_back(0);
                }
                else{
                    vec.push_back(1);
                }
                ++j;
            }
        }
        cout<<ops<<endl;
    }
}