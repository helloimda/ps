#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
bool visited[9] = { 0, };
int arr[9] = { 0, };

int dfs(int num, int cnt) {
    if (cnt == m) {
        for (int i = 0; i <m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return 0;
    }

    for (int i = num; i <= n; i++) {

            arr[cnt] = i;
            dfs(i, cnt + 1);
        
    }
    return 1;
}
int main() {

    cin >> n >> m;
    dfs(1,0);
    return 0;
}