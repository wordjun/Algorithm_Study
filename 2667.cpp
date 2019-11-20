#include<iostream>
#include<stack>
using namespace std;

int arr[30][30];
bool check[30];

int main() {
	stack<int> s1;
	int size = 0;
	//크기 입력받기
	cin >> size;
	//1과 0 입력받기
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < size;j++)
			cin >> arr[i][j];
	}
	//번지수
	int numOfComp = 0;
	while (!s1.empty()) {

	}
}