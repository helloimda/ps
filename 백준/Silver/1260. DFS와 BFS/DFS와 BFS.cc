#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<int>vec[10001];

bool visitdfs[1001];
vector<int>vdfs;

bool visitbfs[1001];
vector<int>vbfs;
queue<int> bq;

int dfs(int r) {
	if (visitdfs[r] == true) return 1;

	visitdfs[r] = true;
	vdfs.push_back(r);

	for (int i = 0; i < vec[r].size(); i++) {
		dfs(vec[r][i]);
	}

	return 0;
}

int bfs(int r) {
	visitbfs[r] = true;
	bq.push(r);
	vbfs.push_back(r);

	while (!bq.empty()) {
		int tmp = bq.front();
		bq.pop();

		for (int i = 0; i < vec[tmp].size(); i++) {
			if (visitbfs[vec[tmp][i]] == false) {
				visitbfs[vec[tmp][i]] = true;
				bq.push(vec[tmp][i]);
				vbfs.push_back(vec[tmp][i]);
			}
		}
	}


	return 1;
}

int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int n, m, r,x,y;

	cin >> n >> m >> r;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for (int i = 0; i < n + 1; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	dfs(r);
	bfs(r);
	
	for (int i = 0; i < vdfs.size(); i++) {
		cout << vdfs[i] <<" ";
	}
	cout << "\n";
	for (int i = 0; i < vbfs.size(); i++) {
		cout << vbfs[i] << " ";
	}

	return 0;
}