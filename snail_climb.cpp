#include<iostream>
using std::cin;
using std::cout;

int main() {
	int up=0, down=0, height = 0;
	int day_count = 0;
	int progress = 0;
	//�ݺ��� ��� �� �ð� �ʰ�
	//�ð����⵵ O(1)�� �����ؾ���
	cin >> up >> down >> height;
	day_count = (height - down -1) / (up - down) +1;
	cout << day_count;
}