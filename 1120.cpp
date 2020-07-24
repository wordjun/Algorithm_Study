#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string A, B;
	//A의 길이는 B의 길이보다 작거나 같다
	//A의 길이가 B의 길이와 같아질 때 까지 다음과 같은
	//연산이 가능하다:
	//1. A의 앞에 아무 알파벳이나 추가
	//2. A의 뒤에 아무 알파벳이나 추가
	cin >> A;
	cin >> B;
	int n1 = strlen(A);//A의 길이
	int n2 = strlen(B);//B의 길이
	int n3 = n2 - n1;
	int n = 0;
	for (int i = 0; i <= n3; i++) {
		for (int j = 0; j < n1; j++) {
			if (A[j] != B[i + j])
				n++;
		}
	}
	return 0;
}