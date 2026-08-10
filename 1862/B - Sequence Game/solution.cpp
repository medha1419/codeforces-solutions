#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;++i){
            if(arr[i]>=arr[i-1]){
                v.push_back(arr[i]);
            }
            else{
                if(arr[i]==1){
                    v.push_back(1);
                }
                else{
                    v.push_back(arr[i]-1);
                }
                v.push_back(arr[i]);
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}