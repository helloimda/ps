#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;

int visited[31]= {0,};


int main(void) {-
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int tmp;
	for (int i = 1; i <=28; i++) {
		cin >> tmp;
		visited[tmp] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (visited[i] == false) cout << i << endl;
	}

}