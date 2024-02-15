#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n;
	stack<int> s;
	cin >> n;
	if (n == 0) {
		cout << 0; return 0;
	}
	while (n!=0) {
		if (n % -2 == 0) {
			s.push(0);
			n /= -2;
		}
		else {
			s.push(1);
			n = (n-1)/-2;
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}