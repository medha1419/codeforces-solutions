#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n;
    while(t--){
        int arr[101]={};
        cin>>n;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            arr[x]++;
        }
        int sum=0;
        int i=0;
        int j;
        int check=0;
 
        for(i=0;i<101;++i){
            if(arr[i]==0 || arr[i]==1){
                if(arr[i]==1){
                    sum+=i;
                    j=i;
                    if(i==100){
                        sum+=sum+1;
                        break;
                    }
                    check=1;
                    break;
                }
                if(arr[i]==0){
                    sum=2*i;
                    break;
                }
            }
        }
        
        if(check==1){
            for(int k=j+1;k<101;++k){
            if(arr[k]==0){
                sum+=k;
                break;
            }
        }
        }
        cout<<sum<<endl;
    }
}