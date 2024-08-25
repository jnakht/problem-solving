#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define ll long long
#define PI 3.1416

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
  	int a, b, x, y;
  	cin >> a >> b >> x >> y;
  	int ans = 0;

  	if (((a > x) + (b > y)) > ((a < x) + (b < y))) ans++;
  	if (((a > y) + (b > x)) > ((a < y) + (b < x))) ans++;
  	if (((b > x) + (a > y)) > ((b < x) + (a < y))) ans++;
  	if (((b > y) + (a > x)) > ((b < y) + (a < x))) ans++;

  	cout << ans << '\n';
  }
  return 0;
}