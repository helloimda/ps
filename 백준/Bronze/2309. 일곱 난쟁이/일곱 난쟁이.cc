#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
bool found;
vector<int> v;

int  dfs(int a, int cnt , int hap, vector<int>& answer) {
	if (found) return 1;
	if (cnt == 7) {
		if (hap == 100) {
			for (int i = 0; i < 7; i++) cout << answer[i] << "\n";
			found = true;
		}
		return 0;
	}
	for (int i = a + 1; i < 9; i++) {
		answer[cnt] = v[i];
		dfs(i, cnt + 1, hap + v[i], answer);
	}
	return 0;
}


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	
	for (int i = 0; i < 9; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	
	vector<int> answer(7,0);
	dfs(-1, 0, 0, answer);
	

	return 0;
}