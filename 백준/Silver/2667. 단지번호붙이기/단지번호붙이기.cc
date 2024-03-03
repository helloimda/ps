#include <iostream>
#include<vector>
#include <queue>
#include <algorithm>
using namespace std;
int cnt[1000] = { 0, };
int arr[28][28] = { 0, };
int check[28][28] = { 0, };
vector<int> v;
vector<int> answer;

int bfs(int i,int j) {
    if (check[i][j] == true) return 1;
    check[i][j] = true; //한번 봤다면 무조건 체킹해서 중복방지
    if (arr[i][j] == 1) {
        cnt[v.back()]++;
        bfs(i - 1, j);
        bfs(i, j - 1);
        bfs(i, j + 1);
        bfs(i + 1, j);
        return 1;
    } 
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;   
    v.push_back(0);
    char c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            arr[i][j] = c - '0';
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == 1 && check[i][j] == 0){
                v.push_back(v.back()+1);
                bfs(i, j);
            }
        }
    }
    int a = 1;
    while (cnt[a] != 0) answer.push_back(cnt[a++]);

    cout << answer.size() <<"\n";
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }
}