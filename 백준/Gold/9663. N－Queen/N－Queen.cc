#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
using namespace std;
int n;
bool visited[16] = { 0, };
int arr[16] = { 0, };
int cnt = 0;

bool check(int level) {
	for (int i = 0; i < level; i++) {
		if (arr[level] == arr[i] || abs(arr[level] - arr[i]) == level - i) return false;
		}
	return true;
}
void dfs(int x) {
	if (x == n) {
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			arr[x] = i;
			if (check(x)) {
				dfs(x + 1);
			}
		}
	}
}

int main(void) {

	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	dfs(0);
	cout << cnt;

	return 0;
}