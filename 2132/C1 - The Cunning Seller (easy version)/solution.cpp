#include <bits/stdc++.h>
using namespace std;
 
long long intPow(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}
 
int intLogExact(long long x, int base) {
    int ans = 0;
    while (x >= base) {
        x /= base;
        ans++;
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        long long n;   // make n long long
        cin >> n;
 
        long long coins = 0;
        int a;
        while (n >= 3) {
            a = intLogExact(n, 3);
            coins += intPow(3, a+1) + a * intPow(3, a-1);
            n -= intPow(3, a);
        }
        coins += n * 3;
        cout << coins << "
";
    }
}