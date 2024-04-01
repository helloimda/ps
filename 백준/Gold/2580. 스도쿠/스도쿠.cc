#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<math.h>
using namespace std;
int n=0;
int cols[10] = { 0, };
int rows[10] = { 0, };
int arr[10][10] = { 0, };
int tmpx, tmpy, tmp;
bool flag; //dfs함수 종료 변수
vector<pair<int, int> > v;
void dfs();
void print();

bool check(int x, int y,int gap) {
    for (int i = 0; i < 9; i++) {
        if (arr[x][i] == gap) return false;
        if (arr[i][y] == gap) return false;
    }
   
    int tmpx = (x / 3) * 3;
    int tmpy = (y / 3) * 3;

    for (int i = tmpx; i < tmpx + 3; i++) {
        for (int j = tmpy; j < tmpy + 3; j++) {
            if (arr[i][j] == gap) return false;
        }
    }
    return true;
}
void dfs(int cnt) {
    if (flag) return;
    if (cnt == n) {
        print();
    }
    else {
        int x = v[cnt].first;
        int y = v[cnt].second;
        for (int i = 1; i <= 9; i++) {
            if (check(x, y, i)) {
                arr[x][y] = i;
                dfs(cnt + 1);
                arr[x][y] = 0;
            }
        }
    }
}
void print() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    flag = true;
}
int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int tmp;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                v.push_back({ i,j });
            }
        }
    }

    n = v.size();
    dfs(0);
}