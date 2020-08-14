<<<<<<< HEAD
#include <string>
#include <vector>
#include<iostream>

using namespace std;
int arr[100001];

//memoization
string fib(string n) {
    if (arr[n] != -1)//이미 값이 있는 경우
        return arr[n];
    else {
        //데이터 저장
        arr[n] = fib(n - 1) + fib(n - 2);
        return arr[n];
    }
}

int solution(int n) {
    memset(arr, -1, sizeof(arr));//초기화
    arr[0] = 0;//f(0) = 0
    arr[1] = 1;//f(1) = 1
    int answer = 0;
    answer = fib(n) % 1234567;
    return answer;
}

int main() {

    cout<<solution(100);
    return 0;
=======
#include <string>
#include <vector>
#include<iostream>

using namespace std;
int arr[100001];

//memoization
string fib(string n) {
    if (arr[n] != -1)//이미 값이 있는 경우
        return arr[n];
    else {
        //데이터 저장
        arr[n] = fib(n - 1) + fib(n - 2);
        return arr[n];
    }
}

int solution(int n) {
    memset(arr, -1, sizeof(arr));//초기화
    arr[0] = 0;//f(0) = 0
    arr[1] = 1;//f(1) = 1
    int answer = 0;
    answer = fib(n) % 1234567;
    return answer;
}

int main() {

    cout<<solution(100);
    return 0;
>>>>>>> 79e753052dde2caa3d0ad3df4380779947a9bdba
}