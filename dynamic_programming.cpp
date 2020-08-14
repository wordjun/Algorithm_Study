<<<<<<< HEAD
//큰 문제를 작은 문제들로 나눠서 푸는 알고리즘
//속성1: 부분문제가 겹친다(중복)
//속성2: 최적부분구조

//대표적인 예: 피보나치 수
//Fn = Fn-1 + Fn-2

//Memoization: 2번 이상 계산되거나 호출되는 식/함수들에 대해
//중복 계산을 방지하기 위해 저장된 결과를 배열에 저장한 뒤 다음에
//동일한 계산이 필요할 때 저장된 값을 불러와 중복을 없애 함수호출이 줄어들게 함

#include<iostream>
using namespace std;
//Top-Down: 큰 문제를 작은 문제로 나눈다
int dp[101];
int fib(int n) {
	//첫번째와 두번째는 base case (각각 0과 1)
	if (n == 1 || n == 2) {
		return 1;
	}
	if (dp[n]) {
		return dp[n];
	}
	dp[n] = fib(n - 1) + fib(n - 2);
	return dp[n];
}

//Bottom-Up: 문제를 크기가 작은 문제부터 차례대로 쓴다
//			문제의 크기를 조금씩 크게 만들면서 문제를 푼다
//			작은 문제를 풀며 큰 문제의 답을 구한다



int main() {
	memset(dp, 0, sizeof(dp));
	//dp[0] = 0, dp[1] = 1;
	cout << fib(5) << '\n';
	return 0;
=======
//큰 문제를 작은 문제들로 나눠서 푸는 알고리즘
//속성1: 부분문제가 겹친다(중복)
//속성2: 최적부분구조

//대표적인 예: 피보나치 수
//Fn = Fn-1 + Fn-2

//Memoization: 2번 이상 계산되거나 호출되는 식/함수들에 대해
//중복 계산을 방지하기 위해 저장된 결과를 배열에 저장한 뒤 다음에
//동일한 계산이 필요할 때 저장된 값을 불러와 중복을 없애 함수호출이 줄어들게 함

#include<iostream>
using namespace std;
//Top-Down: 큰 문제를 작은 문제로 나눈다
int dp[101];
int fib(int n) {
	//첫번째와 두번째는 base case (각각 0과 1)
	if (n == 1 || n == 2) {
		return 1;
	}
	if (dp[n]) {
		return dp[n];
	}
	dp[n] = fib(n - 1) + fib(n - 2);
	return dp[n];
}

//Bottom-Up: 문제를 크기가 작은 문제부터 차례대로 쓴다
//			문제의 크기를 조금씩 크게 만들면서 문제를 푼다
//			작은 문제를 풀며 큰 문제의 답을 구한다



int main() {
	memset(dp, 0, sizeof(dp));
	//dp[0] = 0, dp[1] = 1;
	cout << fib(5) << '\n';
	return 0;
>>>>>>> 79e753052dde2caa3d0ad3df4380779947a9bdba
}