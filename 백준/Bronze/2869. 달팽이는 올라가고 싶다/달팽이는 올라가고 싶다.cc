#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,tmp; //수학도둑 2편인가 추억돋는 문제
	double v,h;
	cin >> a >> b >> v;

	tmp = a - b;

	v -= a;
	if (v == 0) {
		cout << 1;
		return 0;
	} 
	h = v / tmp;

	if (h == 0) cout << int(ceil(h));
	else cout << int(ceil(h)) + 1;

	
	
	
}
