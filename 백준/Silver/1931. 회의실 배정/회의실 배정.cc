#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,tmp1,tmp2;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp1 >> tmp2;
		v.push_back({tmp2, tmp1});
	}
	sort(v.begin(), v.end());
	int out = v[0].first;
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (out <= v[i].second) {
			out = v[i].first;
			cnt++;
		}
	}
	cout << cnt;
}