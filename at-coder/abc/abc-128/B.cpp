#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<string, int> book;

bool compare(pair<string, int> a, pair<string, int> b) {
	// 州の名前が違う場合は州の名前で昇順に並べる
  if(a.first != b.first){
  	return a.first < b.first; // 昇順
  }

	// 州の名前が一緒の場合は、点数で降順に並べる
  return a.second > b.second; // 降順
}


int main() {
	int N = 0; // ページ数
	cin >> N; // 入力
	vector<book> books(N); // レシピ本(名前: 点数)
	vector<int> indexes(N); // 点数とページ番号の紐付け用の配列

	// まずは、ページ数分、情報を受け取る
	repeat(i, N) {
		string city = "";
		int points = 0;
		cin >> city >> points; // コマンドからの情報入力
		books[i].first = city; // レシピ本に名前を登録
		books[i].second = points; // レシピ本に点数を登録
		indexes[i] = points; // ※ 紐付け用配列に、点数とページ番号を登録
	}

	// レシピ本ソート
  sort(books.begin(), books.end(), compare);

	// 結果の出力
	repeat(i, N) {
		int point = books[i].second; // 点数を抽出
		auto itr = find(indexes.begin(), indexes.end(), point); // 紐付け用配列の何番目に点数が格納されているかを検索する
		int index = distance(indexes.begin(), itr); // そこのページ番号を抽出
		cout << index + 1 << endl; // 結果の出力
	}
	return 0;
}
