#include<iostream>
#include<stack>
using namespace std;

int arr[30][30];
bool check[30];

int main() {
	stack<int> s1;
	int size = 0;
	//ũ�� �Է¹ޱ�
	cin >> size;
	//1�� 0 �Է¹ޱ�
	for (int i = 0;i < size;i++) {
		for (int j = 0;j < size;j++)
			cin >> arr[i][j];
	}
	//������
	int numOfComp = 0;
	while (!s1.empty()) {

	}
}