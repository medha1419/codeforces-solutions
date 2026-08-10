#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    const int N= 1e9+1;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        int x;
        for(int i=0;i<n;++i){
            int y;
            cin>>y;
            arr.push_back(y);
            if(i+1==k){
                x=y;
            }
        }
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        int index;
        for(int i=0;i<arr.size();++i){
            if(arr[i]==x){
                index=i;
            }
        }
        int s=0;
        for(int i=index+1;i<arr.size();++i){
            if(arr[i]-arr[index]>arr[index]-s){
                //cout<<"x= "<<arr[index]<<" s= "<<s<<" i= "<<arr[i]<<endl;
                cout<<"NO"<<endl;
                break;
            }
            else if(arr[i]-arr[index]<=arr[index]-s){
                //cout<<"x= "<<arr[index]<<" s= "<<s<<" i= "<<arr[i]<<endl;
                s+=arr[i]-arr[index];
                index=i;
            }
            
        }
        if(index==arr.size()-1){
            cout<<"YES"<<endl;
        }
    }
}