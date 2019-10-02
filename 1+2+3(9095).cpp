#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> A;
bool isNum(int);
int getCount(int);
int main() {
	A.push_back(1), A.push_back(2), A.push_back(4);//base
	int test = 0;
	int num = 0;
	for (int i = 4;i < 10;i++)
		getCount(i);

	cin >> test;
	while (test) {
		cin >> num;
		cout << getCount(num) << endl;
		test--;
	}

	return 0;
}
//recursion
int getCount(int num) {
	if (num <= 0)
		return 0;
	if (isNum(num-1))
		return A[num - 1];

	return getCount(num - 1) + getCount(num - 2) + getCount(num - 3);
}

bool isNum(int index) {
	for (int i = 0;i < A.size();i++) {
		if (i == index)
			return true;
	}
	return false;
}