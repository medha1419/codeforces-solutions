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
        int ops=0;
        int negs=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]==0){
                ops++;
            }
            if(arr[i]<0){
                negs++;
            }
        }
        if(negs%2==1){
            int min=-2;
            for(int i=0;i<n;++i){
                if(arr[i]<0 && abs(arr[i])<abs(min)){
                    min=arr[i];
                }
            }
            min=abs(min);
            min+=1;
            cout<<ops+min<<endl;
        }
        else{
            cout<<ops<<endl;
        }
    }
}