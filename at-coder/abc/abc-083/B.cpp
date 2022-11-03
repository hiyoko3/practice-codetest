#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int calc(int x) {
  int result = 0;
  while(x){
    result += x % 10;
    x /= 10;
  }
  return result;
}

int main() {
	int N = 0, A = 0, B = 0, total = 0, result = 0;
	cin >> N >> A >> B;

	for(int i = 1; i <= N; i++) {
      total = calc(i);
      if (A <= total && total <= B) {
        result += i;
      }
	}
  
  	cout << result << endl;

	return 0;
}
