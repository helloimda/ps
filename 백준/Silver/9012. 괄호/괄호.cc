#include<iostream>
#include<string>
#include<stack>
#include <queue>
using namespace std;

int main()
{
	int n,x,y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		x = 0, y = 0;
		
		if (str.size() % 2 == 0) {
			while (!str.empty()) {
				//cout << "---" << str.back() << "---" << endl;
				if (str.back() == '(') x++;
				else if (str.back() == ')') y++;

				if (x > y) break;
				str.pop_back();
			}
			if (x == y) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
		
	}
}
