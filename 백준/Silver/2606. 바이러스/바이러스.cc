#include <iostream>
#include<vector>
#include <queue>
using namespace std;
int com,cnt=0;
int gragh[101][101] = { 0, };
bool check[101] = { 0, };
queue<int> q;

void bfs(int v) {
    q.push(v);
    check[v] = true;

    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int i = 1; i <= com; i++) {
            if (gragh[v][i] == 1 && check[i] == 0) {
                cnt++;
                check[i] = true;
                q.push(i);
            }
        }
    } 
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,x,y;
    cin >> com  >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        gragh[x][y] = gragh[y][x] = 1;
    }
    bfs(1);
    cout << cnt;
}