#include <bits/stdc++.h>
using namespace std;
 
void printvec(vector<int> arr){
    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }
}
 
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
        int check=0;
        for(int i=1;i<n;++i){
            if(arr[i]!=arr[i-1]){
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<-1<<endl;
        }
        else{
            int largest=arr[0];
            vector<int> a;
            vector<int> b;
            for(int i=0;i<n;++i){
                if(arr[i]>largest){
                    largest=arr[i];
                }
            }
            for(int i=0;i<n;++i){
                if(arr[i]==largest){
                    a.push_back(arr[i]);
                }
                else{
                    b.push_back(arr[i]);
                }
            }
            cout<<b.size()<<" "<<a.size()<<endl;
            printvec(b);
            cout<<endl;
            printvec(a);
            cout<<endl;
        }
    }
}