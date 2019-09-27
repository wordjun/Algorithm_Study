#include<iostream>
using namespace std;

int factorial(int);

int main() {
	int num ;
	cin >> num;
	cout << factorial(num) << endl;
}
int factorial(int n) {
	//base case
	if (n == 0)
		return 1;

	return n * factorial(n - 1);//decrease num by 1
}