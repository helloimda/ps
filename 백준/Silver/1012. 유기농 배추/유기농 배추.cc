#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
bool arr[53][53] = { 0, };
int check[53][53] = { 0, };
bool visited[53][53] ={ 0, };
int a, b, cnt = 0;
int answer=0;
int x, y;
int bfs(int a, int b) {


	if (visited[a][b] == 1) return 0;
	visited[a][b] = true;
	if (arr[a][b] == 1) {
		check[a][b] = cnt;
		
		bfs(a - 1, b);
		bfs(a, b - 1);
		bfs(a, b + 1);
		bfs(a + 1, b);

		return 1;
	}
	return 1;
}

int search() {

	for (int i = 1; i <= x+1; i++) {
		for (int j = 1; j <= y+1; j++) {
			
			if (arr[i][j] == 1 && check[i][j] == 0) {
				cnt++;
				answer++;

				bfs(i, j);
			}
		}
	}
	return 1;
}


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k;

	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> k;
		for (int i = 0; i < k; i++) {
			cin >> a >> b;
			arr[a + 1][b + 1] = true;
		}

		search();
		cout << answer<< '\n';
		answer = 0;
		fill(&arr[0][0], &arr[0][0] + sizeof(arr) / sizeof(bool), false);
		fill(&check[0][0], &check[0][0] + sizeof(check) / sizeof(int), 0);
		fill(&visited[0][0], &visited[0][0] + sizeof(visited) / sizeof(bool), false);
		cnt = 0;
	}
}
