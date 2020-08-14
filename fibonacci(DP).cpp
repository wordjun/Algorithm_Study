#include<iostream>
using namespace std;

//n�� 90�������ԵǸ� int���� (2^30 - 1)�����ۿ� ������
long long arr[1000];
long long fibonacci(int n) {
	if (arr[n] != 0)
		return arr[n];

	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;	
	else if(n>=2)
		arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return arr[n];
}

int main() {
	int num;
	arr[0] = 0, arr[1] = 1;
	cin >> num;
	cout << fibonacci(num)<<endl;
	return 0;
}