#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
//17204죽음의 게임

//일단 더게임오브데스 술게임으로 n명의 사람이 지목한 대상을 카운팅하며 임의로 외친 번호 m이 카운팅되는 사람이 벌주를 마시는 게임인데,
//제한시간이 2초에다가 사람수가 3<=n<=150이라 150명이 최대라서 그냥 개초딩식으로 풀어도 풀릴거같은데 머지;
//일단 임의의 인원수 n까지를 타임어택수라고 두고 그전까지 k에 도달하면 해당 최솟값을 출력, n까지 도달해도 k가 존재하지 않는다면 -1을 출력
//자기자신을 지목하는 경우도 있다고하는데 어자피 150명이 최대라 if를 추가하지 않아도 될듯 싶음?
//지목한 대상의 순환패턴이 존재하기때문에 모든값을 다받고 패턴파악을 진행해야함
int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
    int n, k, m;
    cin >> n >> k;
    int pick[150] = { 0, };
    int tmp;
    
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        pick[i] = tmp;
    }

    if (pick[0] == k) {
        cout << 1;
        return 0;
    }

    int next = 0; //시작값 첫번째 지목자는 0번째이며 해당 사람이 지목한 대상이 두번째
    for (int i = 1; i <=n; i++) {
        next = pick[next];

        if (pick[next] == k) {//지목한 대상이 k일때 보성이의 숫자 차례 리턴
            cout << i+1;
            return 0;
        }
     
        
    }
    cout << -1;
    return 0;
}
//0트 그냥 큰 조건식없이 k에 도달할때만 추려주고 끝까지 아니라면 -1출력하는 문제같은데 아무리 봐도 일단 제출
//1트 흠 틀렸다뜨는데 설마 첫번째가 보성일떄 자기 지목하고 벌주 쳐마시는 ㅄ짓 예외를 처리안해서 그른가