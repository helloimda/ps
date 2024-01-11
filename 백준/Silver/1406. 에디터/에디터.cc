#include<iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack <char> left,right;
	int n;
	char t,c;
	string str;
	cin >> str >> n;

	for (int i = 0; i < str.size(); i++) {
		left.push(str[i]);
	}

	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (t == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (t == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (t == 'P') {
			cin >> c;
			left.push(c);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
}
