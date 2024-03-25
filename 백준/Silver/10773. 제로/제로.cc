#include <iostream>
#include <stack>
#include<vector>
#include<string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	stack<int> s;
	int n,tmp;
	cin >> n;
	long long hap = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == 0) {
			s.pop();
			continue;
		}
		s.push(tmp);
	}
	while (!s.empty()) {
		hap += s.top();
		s.pop();
	}
	cout << hap;
	return 0;
}