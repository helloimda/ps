#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, x, y,hap=0;
	int v[100][100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x+10; j++) {
			for (int k = y; k < y+10; k++) {
				v[j][k]++;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (v[i][j] != 0) hap += 1;
		}
	}
	cout << hap;
}
