#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define ll long long
#define PI 3.1416

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> ans(1000);
  int i = 1, cnt = 1;
  while (cnt <= 1000) {
  	int last_digit = i % 10;
  	if (i % 3 != 0 and last_digit != 3) {
  		ans[cnt] = i;
  		cnt++;
  	}
  	i++;
  }
  int t; cin >> t;
  while (t--) {
  	int n; cin >> n;
  	cout << ans[n] << '\n';
  }
  return 0;
}