#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
	int n,a;
	string str;
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "push") {
			cin >> a;
			q.push(a);
		}
		if (str == "front") {
			if (!q.empty()) cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		if (str == "back") {
			if (!q.empty()) cout << q.back() << "\n";
			else cout << -1 << "\n";
		}
		if (str == "empty") {
			if (!q.empty()) cout << 0 << "\n";
			else cout << 1 << "\n";
		}
		if (str == "size") {
			cout << q.size() << "\n";
		}
		if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << -1 << "\n";
		}
	}
}
