#include<iostream>

using namespace std;

int main()
{
	int cnt = 0, hap = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			cnt++;
		}
		else {
			if (str[i - 1] == '(') hap += --cnt;
			else {
				hap++;
				cnt--;
			}
		}
	}
	cout << hap;

}
