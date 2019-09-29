#include<iostream>
using namespace std;

int main() {
	int num = 0;
	int sum = 0;
	int index1 = 0,index2 = 0;
	int a = 1;//a는 분자, b는 분모
	sum = 2;
	int temp = 0;
	cin >> num;
	while (num > 0) {
		temp = sum;
		if (sum % 2 == 0) {//when sum is even
			while ((temp - 1) > 0 and num > 0) {
				if (a == 0)
					a++;
				cout << sum - a << " / " << a << endl;
				index1 = sum - a, index2 = a;
				a++;//a++
				temp--;
				num--;
			}
		}
		else {//when sum is odd
			while ((temp - 1) > 0 and num > 0) {
				cout << sum - a << " / " << a << endl;
				index1 = sum - a, index2 = a;
				a--;//a--
				temp--;
				num--;
			}
		}
		sum++;
	}
	cout << index1 << "/" << index2 << endl;
}