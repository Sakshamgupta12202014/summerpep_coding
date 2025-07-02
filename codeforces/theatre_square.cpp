#include <bits/stdc++.h>

using namespace std;

void solve(long long l, long long b, long long a) {

    long long x = ceil((long double)l / a);
    long long y = ceil((long double)b / a);

    cout << x*y << endl;
}
int main() {

    long long n, m, a;
    cin >> n >> m >> a;

    solve(n, m ,a);
    return 0;
}