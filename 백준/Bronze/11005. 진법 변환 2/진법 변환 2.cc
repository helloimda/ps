#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long n;
	int b,tmp;
	stack<int>s;
	cin >> n>> b;
	while (n != 0) {
		tmp = n % b;
		if (n % b > 9) {
			tmp += 'A' - 10;
			s.push(tmp);
		}
		else s.push('0' + tmp);
		n /= b;
	}
	while (!s.empty()) {
		cout << char(s.top()); s.pop();
	}
}