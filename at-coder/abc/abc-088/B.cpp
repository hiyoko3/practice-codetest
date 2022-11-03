#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
  int N, result;
  cin >> N;
  vector<int> A(N, 0), alice(N, 0), bob(N, 0);
  
  repeat(i, N) {
    int a;
    cin >> a;
    A[i] = a;
  }
  
  repeat(i, N) {
    auto itr = max_element(A.begin(), A.end());
    int idx = distance(A.begin(), itr);
    if (i % 2 == 0) {
      alice[i] = A[idx];
    } else {
      bob[i] = A[idx];
    }
    A.erase(A.begin() + idx);
  }
  result = accumulate(alice.begin(), alice.end(), 0) - accumulate(bob.begin(), bob.end(), 0);
  cout << result << endl;

  return 0;
}
