#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	int n, k,t,cnt=0,loop=0;
	cin >> n >> k;
	queue<int> answer;

	cout << "<";

	for (int i = 1; i <=n; i++) {
		answer.push(i);
	}
	while (answer.size()>1) {
		++cnt;
		loop++;
		if (cnt == k) {
			cout << answer.front() << ", ";
			answer.pop();
			cnt = 0;
		}
		else {
			answer.push(answer.front());
			answer.pop();
		}
		if (loop == answer.size()) loop = 0;
	}
	cout << answer.front() << ">";
}


