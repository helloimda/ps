#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
	int n, a, max, min, cnt=0;
	stack<int> s,index;
	cin >> n;
	cin >> a;
	vector<int> answer(n);
	s.push(a);
	index.push(0);
	max = a;

	for (int i = 1; i < n; i++) {
		cin >> a;
		if (s.empty()) { //초깃값 설정
			max = a;
			s.push(a);
			index.push(i);
			continue;
		}
		if (s.top() < a) { //오큰수 일때
			if (max < a) {
				while (!index.empty()) {
					answer[index.top()] = a;
					index.pop();
					s.pop();
				}
				max = a;
				s.push(a);
				index.push(i);
			}
			else {
				while (s.top() < a) {
					answer[index.top()] = a;
					index.pop();
					s.pop();
				}
				s.push(a);
				index.push(i);
			}
		}
		else { //오큰수가 아닌 경우 스택에 저장
			s.push(a);
			index.push(i);
		}
	}
	for (int i = 0; i < n-1; i++) {
		if (answer[i] == 0) cout << "-1 ";
		else cout << answer[i] << ' ';
	}
	cout << "-1";
}
