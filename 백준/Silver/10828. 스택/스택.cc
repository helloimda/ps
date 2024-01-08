#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v; //전역함수로 설정한 뒤에 함수를 호출하여 명령어를 실행

//스택의 기본 LIFO에 기반함

void push(int x) {      //push_back 정수를 삽입한다
    v.push_back(x);
}

void pop() {            //pop 가장 위에 있는 정수를 빼고 그수를 출력
    cout << v.back() << endl;
    v.pop_back();
}

void size() {         //인덱스값을 출력
    cout << v.size() << endl;;
}

void empty() {        //인덱스가 0이면 1출력 아니면 0출력
    if (v.size() == 0) cout << 1 << endl;
    else cout << 0 << endl;
}

void top() {          //인덱스가 0이 아니면 최상단 정수를 출력 없으면 -1출력
    if (v.size() != 0) cout << v.back() << endl;
    else cout << -1 << endl;
}

int main() {
    int n, tmp;
    cin >> n;
    /*char s[15];
    cin.getline(s, 15, '\n');*/ //
    string s;


    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "push") {
            cin >> tmp;
            push(tmp);
        }
        else if (s == "pop") {
            if (v.size() == 0) {
                cout << -1 << endl;
                continue;
            }
            pop();
        }
        else if (s == "size") {
            size();
        }
        else if (s == "empty") {
            empty();
        }
        else if (s == "top") {
            top();
        }
    }

}