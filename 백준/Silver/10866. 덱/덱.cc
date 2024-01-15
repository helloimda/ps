#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int n,a;
	deque<int> d;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_back") {
			cin >> a;
			d.push_back(a);
		}
		if (str == "push_front") {
			cin >> a;
			d.push_front(a);
		}
		if (str == "front") {
			if (!d.empty()) cout << d.front() << "\n";
			else cout << "-1\n";
		}
		if (str == "back") {
			if (!d.empty()) cout << d.back() << "\n";
			else cout << "-1\n";
		}
		if (str == "size") {
			cout << d.size() << "\n";
		}
		if (str == "pop_front") {
			if (!d.empty()) {
				cout << d.front() << "\n";
				d.pop_front();
			}
			else cout << "-1\n";
		}
		if (str == "pop_back") {
			if (!d.empty()) {
				cout << d.back() << "\n";
				d.pop_back();
			}
			else cout << "-1\n";
		}
		if (str == "empty") {
			if (!d.empty()) cout << "0\n";
			else cout << "1\n";
		}
	}
}
