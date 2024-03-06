#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int> vec[100001];
bool visited[100001];
queue<int> q;

int cnt = 1;
int answer[100001];

int bfs(int r) {
	visited[r] = true;
	answer[r] = cnt++;
	q.push(r);

	while (!q.empty()) {
		int tmp = q.front();

		q.pop();
		for (int i = 0; i < vec[tmp].size(); i++) {

			if (visited[vec[tmp][i]] == false) {
				visited[vec[tmp][i]] = true;
				q.push(vec[tmp][i]);

				answer[vec[tmp][i]] = cnt++;
			}
		}

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

	for (int i = 0; i < n + 1; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	bfs(r);

	for (int i = 1; i <= n; i++) {
		cout << answer[i] << "\n";
	}
}