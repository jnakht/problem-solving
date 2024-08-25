#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define PI 3.1416

solve() {
  int n;
  cin >> n;
  int a = n % 10;
  n /= 10;
  cout << a + n << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}