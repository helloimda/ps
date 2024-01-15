#include<iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int a;
	string str;
	stack<char>s;
	bool flag = false;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (!flag) { // 문자열을 거꾸로 출력해야하므로 스택에 저장 후 후입선출로 거꾸로 출력
			if (str[i] != '<') {
				if (str[i] == ' ') { 
					while (!s.empty()) {
						cout << s.top();
						s.pop();
					}
					cout << str[i];
				}
				else s.push(str[i]);
				
			}
			else {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				flag = true;
				cout << str[i];
			}
		}
		else { 
			if (str[i] == '>') {
				flag = false;
				cout << str[i];
			}
			else cout << str[i];
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
