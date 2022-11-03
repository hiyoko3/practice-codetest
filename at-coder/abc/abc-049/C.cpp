#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
  string S, check = "";
  bool is_exist = false;
  vector<string> list = {"dream", "dreamer", "erase", "eraser"};
  cin >> S;

  for(int i = S.length() - 1; i >= 0; i--) {
    check.insert(0, 1, S[i]);
    auto itr = find(list.begin(), list.end(), check);
    int idx = distance(list.begin(), itr);
    is_exist = (idx == list.size()) ? false : true;
    if ( is_exist ) {
      check = "";
    }
  }
  
  cout << ((is_exist) ? "YES" : "NO") << endl;
  return 0;
}
