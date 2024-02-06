#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include <numeric>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, cnt = 0;
	cin >> n;
    if (n <= 1) {
        cout << 0;
        return 0; 
    }
	for (int i = 2; i <= n; i++) {
		if (i % 5 == 0) cnt++;
		if (i % 25 == 0) cnt++;
		if (i % 125 == 0) cnt++;
	}
	cout << cnt;
}