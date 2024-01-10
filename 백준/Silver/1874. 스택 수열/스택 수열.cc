#include<iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	int n,x,cnt=1;
	cin >> n;
	stack<int> v;
	queue<char> answer;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (v.empty() || v.top() < x) { //비어있거나 스택의 탑이 x보다 작은경우 푸쉬한다. 숫자가 클경우만 푸쉬
			do {
				v.push(cnt);
				answer.push('+');
			} while (x != cnt++);		//x와 cnt가 같아질때까지 루프
			v.pop();
			answer.push('-');
		}
		else {		  					//스택 탑이 숫자가 입력받은 값보다 작거나 같을경우
			if (v.top() == x) {		//같다면 pop을 진행
				v.pop();
				answer.push('-');
			}
			else {
				for (int j = i; j < n; j++) {
					cin >> x;
				}
				cout << "NO";
				return 0;
			}
		}
	}
	while (!answer.empty()) { //큐가 없어질때까지 출력
		cout << answer.front() << "\n";
		answer.pop();
	}
}
