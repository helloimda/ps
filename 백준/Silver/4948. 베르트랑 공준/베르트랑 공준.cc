#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
vector<int> v;

vector<bool> check(250001,false);



int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, first, cnt=0;
	for (int i = 2; i <= 250000; i++) {
		if (!check[i]) {
			for (long long j = (long long)i * i; j <= 250000; j += i) {
				check[j] = true;
				}
			}
		}

	while (1) {
		cin >> n;
		if (!n) return 0;
		for (int i = n+1; i <= n * 2; i++) {
			if (!check[i]) cnt++;
		}
		cout << cnt << '\n';
		cnt = 0;
	}

}
	