#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n'
#define ll long long
#define PI 3.1416

void solve() {
		string s; 
  	cin >> s;
  	if (s.size() <= 2) {
  		 cout << "NO" << '\n';
  		 return;
  	}
  	int base = (s[1]-'0') * 1 + (s[0]-'0') * 10;
  	s[0] = s[1] = '0';
  	int exp = stoi(s);
  	if (base != 10 or exp <= 1 or s[2] == '0') {
  		cout << "NO" << '\n';
  		return;
  	}
  	cout << "YES" << 	'\n';


}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
  	solve();
  }
  return 0;
}