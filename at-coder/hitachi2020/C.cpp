#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

map<P, bool> tree;
map<P, int> temp;
int N;

P dfs(int x, int founded, int dist) {
	if (dist == 3) {
		return make_pair(x, founded);
	};

	repeat(i, N) {
		if (dist == 3) break;
		P r = make_pair(i+1, x);
		if (tree.count(r) == 0) continue;

		temp[r] = 0;
		dist++;
		dfs(i+1, founded, dist);
	}

	return make_pair(0, 0);
}

int main() {
	cin >> N;
	bool is_exist = false;

	repeat(i, N - 1) {
		int a, b;
		cin >> a >> b;
		P p = make_pair(a, b);
		P r_p = make_pair(b, a);

		tree[p] = false;
		tree[r_p] = false;
	}

	vector<int> list(N, 0);
	repeat(i, N) {
		list[i] = i+1;
	}

	map<int, vector<int>> dic;

	int count = 0;
	do{
		vector<int> l(N, 0);
		repeat(i, N) {
			l[i] = list[i];
		}
		dic[count] = l;
		count++;
  }while(next_permutation(list.begin(), list.end()));

	vector<P> ans;
	int counter = 0;
	for(int i = N; i > 0; i--) {
		ans[counter++] = dfs(N, 0, 0);
	}

	vector<int> hoge;
	for(auto i : dic) {
		int a = i.second[ans.first];
		int b = i.second[ans.second];

		if (((a+b) % 3) == 0 || ((a*b) % 3) == 0) {
			hoge = i.second;
			is_exist = true;
			break;
		}
	}

	if (is_exist) {
		repeat(i, hoge.size()) {
			cout << hoge[i];
		}
		cout << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
