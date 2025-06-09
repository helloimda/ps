#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

//16198 에너지모으기
//n개 있는 구슬중에서 x번째 지목한 구슬을 제거하고 x-1 * x+1만큼 에너지를 모은다. 에너지를 누적합으로 두고 최댓값을 구하기
//결국엔 잘제거해야하는데 에너지는 구슬개수가 3일때까지만 제거가능 즉, 좌우가 있어야 제거가 됨
//문제를 봤을때 풀이방법은 bfs, 그리디?, dp 셋중하난데 dp는 좀 애매한듯 싶음 어디서 시작해야 최댓값에 도달하는지가 애매한문제인듯
//구할 수 있는 방법중 최댓값이므로 max를 정답으로 두어 최댓값 출력
//1초이긴 한데 n이 10이니 넉넉한듯 bfs로 구현시도 구슬이 제거가 되기때문에 dfs보단 bfs가 적절한 문제인듯?
//다시 생각해보니 dfs가 맞는듯 중앙값만 계속 패턴돌려야하니까

int maxhap = 0;

void dfs(vector<int>&v, int hap) {

    if (v.size() == 2) { 
        maxhap = max(maxhap, hap);
        return;
    }

    for (int i = 0; i < v.size()-2; i++) {
        vector<int> vv = v;
        vv.erase(vv.begin() + i + 1);
        dfs(vv, hap + (v[i] * v[i + 2]));
    }
}

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n,tmp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    dfs(v,0);

    cout << maxhap;
}
//0트 대충 dfs 흐름은 파악했었는데 제거부분이 익숙하지 않아서 답지찬스 사용함
//원래는 arr, visit개념을 사용하려고했었는데 답지찬스에서는 벡터하나로 카피해서 리턴하는 방식을 채택함