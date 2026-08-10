#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int n;cin>>n;
    if(n%2==0)
    {
        n/=2;
        n--;
        cout<<n<<endl;
    }
    else
    {
        n/=2;
        cout<<n<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}