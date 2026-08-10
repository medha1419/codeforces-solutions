#include <bits/stdc++.h>
using namespace std;
void Solve()
{
    int n;cin>>n;
    vector<int> arr;
    while(n--)
    {
        int e;cin>>e;
        arr.push_back(e);
    }
    sort(arr.begin(),arr.end());
    int max=arr[1]-arr[0];
    for(int i=1;i<arr.size();i+=2)
    {
        int diff=arr[i]-arr[i-1];
        if(diff>max){max=diff;}
    }
    cout<<max<<endl;
}
int main()
{
    int t;
    //t=1;
    cin>>t;
    while(t--)
    {
        Solve();
    }
    return 0;
}