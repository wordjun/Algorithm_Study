#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> v1(10, 0);//0���� �ʱ�ȭ�� 10���� ���Ҹ� ����
vector<int> v2;//�Է¹��� ���� v1�� ���� ����
int main() {
	int test = 0, beauty;

	string num;
	cin >> test;
	while (test) {
		beauty = 0;//initialize

		cin >> num;
		for (int i = 0;i < num.length();i++)
			v2.push_back(num[i]-48);
		
		int temp=0;
		for (int i = 0;i < 10;i++) {
			while (i == v2[temp] && v1[i] == 0) {
				v1[i] = 1;//������ 1�� �����
				temp++;
			}
		}
		for (int i = 0;i < 10;i++)
			beauty += v1[i];
		cout << beauty << endl;
		test--;
	}
	

	return 0;
}