#include <iostream>
#include <stack>
#include<vector>
#include<string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	stack<int> s;
	int n,num,tmp;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		switch (tmp)
		{
			case 1:
				cin >> num;
				s.push(num);
				break;
			case 2:
				if (s.empty()) cout << -1 << "\n";
				else {
					cout << s.top() << "\n";
					s.pop();
				}
				break;
			case 3:
				cout << s.size() << "\n";
				break;
			case 4:
				if (s.empty())cout << 1 << "\n";
				else cout << 0 << "\n";
				break;
			case 5:
				if (s.empty()) cout << -1 << "\n";
				else {
					cout << s.top() << "\n";
				}
				break;

		default:
			break;
		}
	}
		
	
}