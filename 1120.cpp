#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string A, B;
	//A�� ���̴� B�� ���̺��� �۰ų� ����
	//A�� ���̰� B�� ���̿� ������ �� ���� ������ ����
	//������ �����ϴ�:
	//1. A�� �տ� �ƹ� ���ĺ��̳� �߰�
	//2. A�� �ڿ� �ƹ� ���ĺ��̳� �߰�
	cin >> A;
	cin >> B;
	int n1 = strlen(A);//A�� ����
	int n2 = strlen(B);//B�� ����
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