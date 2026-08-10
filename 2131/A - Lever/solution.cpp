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
        int a[n];
        int b[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        int it=0;
        while(true){
            int check=0;
            it++;
            for(int i=0;i<n;++i){
                if(a[i]>b[i]){
                    a[i]--;
                    check=1;
                    break;
                }
            }
            for(int i=0;i<n;++i){
                if(a[i]<b[i]){
                    a[i]++;
                    break;
                }
            }
            if(check==0){
                break;
            }
        }
        cout<<it<<endl;
    }
}