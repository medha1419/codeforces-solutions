#include <bits/stdc++.h>
using namespace std;
 
void merge(vector<long long int> &vec, int l, int m, int r){
    vector<long long int> temp;
    int i=l;
    int j=m+1;
    while(i<=m && j<=r){
        if(vec[i]<=vec[j]){
            temp.push_back(vec[i]);
            i++;
        }
        else{
            temp.push_back(vec[j]);
            j++;
        }
    }
    while(i<=m){
        temp.push_back(vec[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(vec[j]);
        j++;
    }
    for(int k=l;k<=r;++k){
        vec[k]=temp[k-l];
    }
}
 
void mergesort(vector<long long int> &vec,int l,int r){
    if(l==r){
        return;
    }
    int m=(l+r)/2;
    mergesort(vec,l,m);
    mergesort(vec,m+1,r);
    merge(vec,l,m,r);
}
 
long long intPow(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) {        // if exp is odd
            result *= base;
        }
        base *= base;
        exp >>= 1;            // divide exp by 2
    }
    return result;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<long long int> vec;
        long long int n;
        cin>>n;
        int i=1;
        int count=0;
        while(true){
            if(n/(1+intPow(10,i))<1){
                break;
            }
            else if(n%(1+intPow(10,i))==0){
                vec.push_back(n/(1+intPow(10,i)));
                count++;
            }
            i++;
        }
        if(count==0){
            cout<<count<<endl;
        }
        else{
            cout<<count<<endl;
            mergesort(vec,0,vec.size()-1);
            for(int i=0;i<vec.size();++i){
            cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
    }
}