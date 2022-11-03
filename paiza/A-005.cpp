#include <bits/stdc++.h>


// increment
#define rep_n(_1, _2, _3, NAME, ...) NAME
#define rep_2(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define rep_3(i, initial, n) \
  for (int(i) = (int)(initial); (i) < (int)(n); ++(i))
#define rep(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME, ...) NAME
#define rep_r_2(i, n) for (int(i) = (int)(n); (i) > 0; (i)--)
#define rep_r_3(i, initial, n) \
  for (int(i) = (int)(initial); (i) > (int)(n); (i)--)
#define rep_r(...) rep_r_n(__VA_ARGS__, rep_r_3, rep_r_2)(__VA_ARGS__)
// define type definition
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

// define construct variable
const double EPS = numeric_limits<double>::epsilon();
// 10^9 + 7
const ll MOD = ll(1e9) + 7;
const ll INF = ll(1e10);
const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
const double PI = acos(-1);

// define methods
// 最大公約数
ll gcd(const ll a, const ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(const ll a, const ll b) { return a / gcd(a, b) * b; }
// char -> int
int ctoi(char c) { return (int)(c - '0'); }
// 素因数分解
vector<pair<ll, ll>> prime_factorize(ll n) {
  vector<pair<ll, ll>> p;
  for (ll i = 2; i * i <= n; i++) {
    if ((n % i) != 0) continue;
    pair<ll, ll> a = make_pair(i, 0);
    while ((n % i) == 0) {
      n /= i;
      a.second += 1;
    }
    p.push_back(a);
  }

  if (n != 1) p.push_back(make_pair(n, 1));
  return p;
}
// 組み合わせの整合性を保つ（後ほど解析する）
ll modinv(ll a) {
  ll b = MOD, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= MOD;
  if (u < 0) {
    u += MOD;
  }
  return u;
}
// 順列
ll permutation(const ll n, const ll m) {
  ll result = 1;
  for (ll i = n; i > n - m; i--) {
    result = (result * i) % MOD;
  }
  return result;
}

// 繰り返し n 乗法
ll repeat_square(const ll n, const ll x) {
  if (x == 0) return 1;
  ll res = repeat_square(n, x / 2);
  res = res * res % MOD;
  if ((x % 2) == 1) res = res * n % MOD;
  return res;
}
// 組み合わせ nCm
ll combination(ll n, ll m) {
  ll p = permutation(n, m);
  ll div = 1;
  for (ll i = 2; i <= m; i++) {
    div = (div * i) % MOD;
  }
  return (p * modinv(div)) % MOD;
}

// アルファベットの取得
string get_alphabet(ll n) {
  n--;
  return string(1, 'a' + (n % 26));
}

int main() {
  int A, B, N;
  cin >> A >> B >> N;

  auto getnum = [&](string x) {
    return (x =="G") ? 0 : stoi(x);
  };

  vector<string> S(N, "");
  vector<int> x(A, 0);
  rep(i, N) {
    cin >> S[i];
  }

  int temp = 0;
  int idx = 0, count = 0, last_i = 0;
  rep(i, N) {
    if (idx == A-1) {
      last_i = i;
      break;
    }
    int n1 = getnum(S[i]);
    count++;
    temp += n1;
    int m1 = getnum(S[i+1]);
    int m2 = getnum(S[i+2]);
    // strike
    if (count == 1 && temp == B) {
      x[idx] = temp + m1 + m2;
      idx++;
      temp = 0;
      count = 0;
      continue;
    }
    // spare
    if (count == 2 && temp == B) {
      x[idx] = temp + m1;
      idx++;
      temp = 0;
      count = 0;
      continue;
    }
    if (count == 2) {
      x[idx] = temp;
      idx++;
      temp = 0;
      count = 0;
      continue;
    }
  }

  // last
  count = 0;
  temp = 0;
  bool is_next = false;
  rep(i, last_i, N) {
    int n2 = getnum(S[i]);
    count++;
    temp += n2;

    if (count <= 2 && temp == B) {
      is_next = true;
    }
    // strike
    if (count == 1 && temp == B) {
      int o1 = getnum(S[i+1]);
      int o2 = getnum(S[i+2]);
      x[idx] += temp + o1 + o2;
      temp = 0;
      continue;
    }
    // spare
    if (count == 2 && temp == B) {
      int o3 = getnum(S[i+1]);
      x[idx] += temp + o3;
      temp = 0;
      continue;
    }

    if (count == 3) {
      x[idx] += temp;
      break;
    }

    if (count == 2 && is_next == false) {
      x[idx] += temp;
      break;
    }
  }

  int ans = 0;
  rep(i, x.size()) {
    // cout << x[i] << endl;
    ans += x[i];
  }
  cout << ans << endl;
  return 0;
}
