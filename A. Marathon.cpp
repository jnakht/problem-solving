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
  	int ans = 0;
  	vector<int> v(4, -1);
  	for (int i = 0; i < 4; i++) {
  		cin >> v[i];
  		if (v[i] > v[0]) {
  			ans++;
  		}
  	}
  	cout << ans << '\n';
  }
  return 0;
}