#include <bits/stdc++.h>
using namespace std;
 
int main() {
  const int COIN = 500;
  int K, X;
  string result = "Yes";
 
  // ε₯ε
  cin >> K >> X;
 
  int totalValue = K * COIN;
  if (totalValue < X) {
    result = "No";
  }
 
  // εΊε
  cout << result << endl;
}
