#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n];
    long long int sum=0;
    unordered_map<long long int,int> right_mp;
    unordered_map<long long int,int> left_mp;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
        right_mp[arr[i]]++;
    }
    if(sum%2!=0){
        cout<<"NO";
        return 0;
    }
    long long int half=sum/2;
    long long int leftsum=0;
    for(int i=0;i<n;++i){
        right_mp[arr[i]]--;
        left_mp[arr[i]]++;
        leftsum+=arr[i];
        if(leftsum==half){
            cout<<"YES";
            return 0;
        }
        if(leftsum>half){
            long long int excess=leftsum-half;
            if(left_mp[excess]>0){
                cout<<"YES";
                return 0;
            }
        }
        if(leftsum<half){
            long long int less=half-leftsum;
            if(right_mp[less]>0){
                cout<<"YES";
                return 0;
            }
        }
    }
cout<<"NO";
return 0;
}