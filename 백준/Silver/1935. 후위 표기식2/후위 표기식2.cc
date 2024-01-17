#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a,tmp;
	double x, y, hap;
	
	stack<double> s;
	string str;
	cin >> n >>str;
	vector<int> v(100,0);

	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			tmp = int(str[i]);
			if (v[tmp] == 0) {
				cin >> a;
				v[tmp] = a;
			}
			s.push(v[tmp]);
		}
		else if (str[i] == '+') {
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();
			hap = x + y;
			s.push(hap);
		}
		else if (str[i] == '-') {
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();
			hap = double(x - y);
			s.push(hap);
		}
		else if (str[i] == '/') {
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();
			hap = x / y;
			s.push(hap);
		}
		else if (str[i] == '*') {
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();
			hap = x * y;
			s.push(hap);
		}
	}
	cout.precision(2);
	cout << fixed; //소수점 고정
	cout << hap;
}
