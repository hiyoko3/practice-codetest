#include <bits/stdc++.h>
// increment
#define rep_n(_1, _2, _3, NAME,...) NAME
#define rep_2(i, n) for(int i = 0; i < (int)(n); ++i)
#define rep_3(i, initial, n) for(int i = (int)(initial); i < (int)(n); ++i)
#define repeat(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME,...) NAME
#define rep_r_2(i, n) for(int i = (int)(n); i > 0; i--) 
#define rep_r_3(i, initial, n) for(int i = (int)(initial); i > (int)(n); i--)
#define repeat_r(...) rep_r_n(__VA_ARGS__, rep_r_3, rep_r_2)(__VA_ARGS__)
// define variable
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	int N;
	cin >> N;

	ll sum = 0;
	vector<int> A(N, 0);

	int b = 0;
	repeat(i, N) {
		int a = 0;
		cin >> a;

		sum += abs(a - b);
		b = a;
		A[i] = a;
	}

	sum += abs(b - 0);


	ll result = 0;
	int prev = 0;
	int next = 0;
	repeat(i, N) {
		prev = (i == 0) ? 0 : A[i-1];
		next = ((i+1) == N) ? 0 : A[i+1]; 

		ll a = abs(prev - A[i]);
		ll b = abs(A[i] - next);
		ll c = abs(next - prev);
		result = sum - (a + b) + c;

		cout << result << endl;
	}
	return 0;
}
