#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
vector<int> v;

int n, m;
int arr[9] = { 0, };


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;

	int dp[1001] = {0,};
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}

	cout << dp[n];

}
	