#include <bits/stdc++.h>
using namespace std;
void merge(vector<long long int>& arr, int l, int m, int r){
    vector<int> temp;
    int i=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(arr[i]>=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=l;k<=r;++k){
        arr[k]=temp[k-l];
    }
}
 
void ms(vector<long long int>& arr, int l, int r){
    if(l==r){return;}
    int m=(l+r)/2;
    ms(arr,l,m);
    ms(arr,m+1,r);
    merge(arr,l,m,r);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n];
        vector<long long int> odds;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]%2==1){
                odds.push_back(arr[i]);
            }
        }
        long long int dand=0;
        if(odds.size()==0){
            cout<<0<<endl;
        }
        else{
            ms(odds,0,odds.size()-1);
            dand+=odds[0];
            for(int i=0;i<n;++i){
                if(arr[i]%2==0){
                    dand+=arr[i];
                }
            }
            if(odds.size()%2==1){
                for(int i=1;i<=odds.size()/2;++i){
                    dand+=odds[i];
                }
            }
            else{
                for(int i=1;i<odds.size()/2;++i){
                    dand+=odds[i];
                }
            }
            cout<<dand<<endl;
        }
    }
}