#include <bits/stdc++.h>
using namespace std;
 
int main() {
  const int COIN = 500;
  int K, X;
  string result = "Yes";
 
  // 入力
  cin >> K >> X;
 
  int totalValue = K * COIN;
  if (totalValue < X) {
    result = "No";
  }
 
  // 出力
  cout << result << endl;
}
