#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, won, tmp, cnt = 0;;
	cin >> n >> won;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(),greater<>());
	for (int i = 0; i< n; i++) {
		cnt += (won / v[i]);
		won %= v[i];
	}
	cout << cnt;
}