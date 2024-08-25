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
  	string a, b;
  	cin >> a >> b;
  	string ans = "";
  	int j = 0, i = 0, cnt = 0;
  	while (j < b.size() and i < a.size()) {
  		if (b[j] == a[i]) {
  			ans += a[i];
  			i++, j++, cnt++;
  		}
  		else if (a[i] == '?') {
  			ans += b[j];
  			i++, j++, cnt++;
  		}
  		else {
  			ans += a[i];
  			i++;
  		}
  	}
  	while (i < a.size()) {
  		if (a[i] == '?') {
  			ans += 'a';
  			i++;
  		}
  		else {
  			ans += a[i];
  			i++;
  		}
  	}
  	if (cnt == b.size()) {
  		cout << "YES" << '\n';
  		cout << ans << '\n';
  	}
  	else {
  		cout << "NO" << '\n';
  	}
  }
  return 0;
}