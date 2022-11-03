#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
  int N;
  bool is_ok = false;
  cin >> N;
  vector<int> t(110000), x(110000, 0), y(110000, 0);
  repeat(i, N) {
    cin >> t[i] >> x[i] >> y[i];
  }
  
  for(int i = 0; i < N; i++) {
    is_ok = (t[i] % 2) == ((x[i] + y[i]) % 2) ? true : false;
    if (t[i] < (x[i] + y[i])) { is_ok = false; }
    if (!is_ok) break;
  }
  cout << (is_ok ? "Yes" : "No") << endl;
  return 0;
}
