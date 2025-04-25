#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

//1149번 rgb거리
//문제의 조건은 rgb컬러로 집들의 색깔을 칠해야함 n을 기준으로 +-1의 집은 n의 색깔과 달라야함
//집마다 rgb로 칠하는 가격이 존재하는데 가격이 다르므로 최솟값을 찾아서 칠해야함

//+-1이니 dp n-2의 값을 통해서 min값을 유추해낼 수 있지 않을까 생각함
//비교는 r일때 b,g b일때 rg g일떄 rb를 이전값들을 더한 값들중 최솟값을 찾으면 되지 않을까?라는 생각중

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n;
    vector<int> v;
    cin >> n;    
    int dp[1001][3] = {0,};

    dp[0][0]=0; dp[0][1]=0; dp[0][2]=0;
    
    for(int i=1; i<=n; i++){
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];

        dp[i][0] += min(dp[i-1][1],dp[i-1][2]); //r == b, g
        dp[i][1] += min(dp[i-1][0],dp[i-1][2]); //b == r, g
        dp[i][2] += min(dp[i-1][0],dp[i-1][1]); //g == r, b
    }

    cout << min({dp[n][0],dp[n][1],dp[n][2]});
    
}
//0트 뭔가 조건이 까다로운데;; rgb를 통해 3번째 최솟값을 찾는다해도 큰 수값 반례가 존재하면 바꿔줘야함
//답지찬스 >> 애초에 값을 입력받을때 한줄씩 배열에 적용한 후 i-1값을 통해 min값 적용 답보니까 쉬워보이는데 어려운듯;; n-4까지 생각했었는데

//초기에 구상했던 +-에서 -만 보고가는걸로 단순하게 생각했어야하는 듯? 너무 반례를 생각하다보니 점화식을 구하는 방법에서 매몰되버림;;