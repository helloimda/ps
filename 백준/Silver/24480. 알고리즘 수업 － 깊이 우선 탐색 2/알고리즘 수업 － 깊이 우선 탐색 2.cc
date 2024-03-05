#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> vec[100001];
bool visited[100001];
int cnt = 0;
int answer[100001];
int dfs(int r) {
	if (visited[r] == true) return 1;

	visited[r] = true;
	cnt++;
	answer[r] = cnt;

	for (int i = 0; i < vec[r].size(); i++) {
		dfs(vec[r][i]);
	}
	return 1;
}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m, r, x, y;

	cin >> n >> m >> r;
	
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for (int i = 0; i < n+1; i++) {
		sort(vec[i].begin(), vec[i].end(), greater<int>());
	}

	dfs(r);
	for (int i = 1; i <= n; i++) {
		cout << answer[i] << "\n";
	}
}