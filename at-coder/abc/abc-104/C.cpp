#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main(){
    int D, G;
    cin >> D >> G;
		vector<int> p(D, 0), c(D, 0);

    for(int i = 0; i < D; ++i){
        cin >> p[i] >> c[i];
    }

		// 問題の最大値
    int result = 1e9;


    for(int mask = 0; mask < (1 << D); ++mask){
			int sum = 0, num = 0, rest_max = -1;

			for(int i = 0; i < D; ++i){
				if(mask >> i & 1) {
						sum += 100 * (i+1) * p[i] + c[i]; // 点数計算 100点 * i問目 * 問題数 + ボーナス点
						num += p[i]; // 問題数にプラス
				} else {
						rest_max = i;
				}
			}
			printf("rest: %d, sum: %d, num: %d\n", rest_max, sum, num);

			// 目標点に到達していない場合
			if(sum < G){
					int sum_1 = 100 * (rest_max + 1);
					int need = (G - sum + sum_1 - 1) / sum_1;
					if(need >= p[rest_max]){
							continue;
					}
					num += need;
			}
			result = min(result, num);
    }
    cout << result << endl;
}
