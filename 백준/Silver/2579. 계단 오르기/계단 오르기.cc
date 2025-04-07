#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<climits>
using namespace std;
vector<int> v;

int n, m;
int arr[9] = { 0, };


int main(void) {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,tmp;
    int arr[301];
    int dp[301];
	cin >> n;

	for (int i=1; i<=n; i++){
        cin >> tmp;
        arr[i]= tmp;
    }

    dp[1] = arr[1]; // 1번째는 1
    if (n>=2) dp[2] = dp[1] + arr[2]; // 2는 1+2
    if (n>=3) dp[3] = max(dp[1] + arr[3], arr[2] + arr[3]); // 3번째는 1+2 혹은 2+3 
    
    //4번째부터는 앞서 선언한 1,2,3번째의 값을 토대로 큰 것을 비교하여 적용함 (1,2 or 1,3),4가 되는 것임 

    for(int i=4; i<=n; i++){
        dp[i]= max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]) ; // 이후로 n-3, n-1이 큰지 n-2가 큰지 비교하여 큰것으로 적용
    }
    cout << dp[n];

}
	