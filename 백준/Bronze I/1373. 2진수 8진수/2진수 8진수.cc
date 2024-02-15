#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string num;
	stack<int>s;
	cin >> num;
	int hap = 0,tmp=0,bin=1;
	while (!num.empty()) {
		if (num[num.size()-1] == '1') {
			tmp += bin;
		}
		bin *= 2;
		num.pop_back();
		if (bin == 8||num.empty()) {
			s.push(tmp);
			tmp = 0;
			bin = 1;
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}