#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int gcd(int x, int y) {
	int tmp;
	while (y != 0) {
		tmp = x % y;
		x = y;
		y = tmp;
	}
	return x;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, s, num,gc=1;
	cin >> n >> s;
	vector <int> v(n+1);

	if (n == 1) {
		cin >> num;
		cout << abs(num - s);
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> num;
		v[i] = abs(s - num);
	}
	gc = gcd(v[0], v[1]);

	if (n == 2) {
		cout << gc;
		return 0;
	}
	for (int i = 2; i < n; i++) {
		gc = gcd(v[i], gc);
	}
	cout << gc;
}