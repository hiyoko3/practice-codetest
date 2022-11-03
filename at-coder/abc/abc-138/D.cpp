#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

vector<int> tree[200005], values;

void dfs(int index, int parent = -1) {
	int result = 0;
	for (int pos : tree[index]) {
		if (pos == parent) continue;
		values[pos] += values[index];
		dfs(pos, index);
	}
}

int main() {
	int N = 2, Q = 1;
	cin >> N >> Q;

	repeat(i, N - 1) {
		int a = 0, b = 0;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	values.resize(N);

	repeat(i, Q) {
		int p = 0, x = 0;
		cin >> p >> x;
		p -= 1;
		values[p] += x;
	}

	dfs(0);

	repeat(i, N) {
		cout << values[i] << endl;
	}

	cout << endl;
	return 0;
}
