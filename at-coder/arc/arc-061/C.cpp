#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	string S;
	ll result = 0;

  cin >> S;
	// 0000 0001 を S.length() - 1 分左へシフト 
  repeat(i, 1 << ( S.length() - 1 )){
    ll sum = 0;
    ll a = S[0] - '0'; // 数値へ変換

    repeat(j, (S.length() - 1)){
      if( i & (1 << j) ){ // iと 1をjビット分左にシフトした値で ビット積演算
        sum += a;
        a = 0;
      }
      a = a * 10 + S[j + 1] - '0';
    }
    sum += a;
    result += sum;
  }
  cout << result << endl;
	return 0;
}
