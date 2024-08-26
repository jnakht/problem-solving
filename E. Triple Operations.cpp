#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define ll long long
#define PI 3.1416

const int max_size = 2e5 + 10;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> pre(max_size);
  for (int i = 1; i <= max_size; i++) {
  	pre[i] = pre[i/3] + 1;
  }

  int t; cin >> t;
  while (t--) {
  	int l, r;
  	ll ans = 0; 
  	cin >> l >> r;
  	for (int i = l; i <= r; i++) {
  		ans += pre[i];
  	}
  	cout << ans + pre[l]<< '\n';
  }
  return 0;
}