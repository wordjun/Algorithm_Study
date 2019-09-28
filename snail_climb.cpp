#include<iostream>
using std::cin;
using std::cout;

int main() {
	int up=0, down=0, height = 0;
	int day_count = 0;
	int progress = 0;
	//반복문 사용 시 시간 초과
	//시간복잡도 O(1)을 만족해야함
	cin >> up >> down >> height;
	day_count = (height - down -1) / (up - down) +1;
	cout << day_count;
}