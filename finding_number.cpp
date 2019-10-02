#include<iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	int* nArr = new int[N];
	for (int i = 0;i < N;i++)
		cin >> nArr[i];

	int M = 0;
	cin >> M;
	int* mArr = new int[M];
	for (int i = 0;i < M;i++)
		cin >> mArr[i];

	int j = 0, i=0;
	for (i = 0;i < N;i++) {
		for (j = 0;j < M;j++) {
			if (mArr[j] == nArr[i]) {
				cout << 1 << "\n";
			}
		}
		if (i == N-1)
			cout << 0 << '\n';
	}
}