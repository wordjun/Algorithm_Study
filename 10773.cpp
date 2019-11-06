#include<iostream>
#include<stack>
using namespace std;

int main() {
	int K = 0, num = 0, sum = 0;
	stack<int> s1;
	cin >> K;
	for (int i = 0;i < K;i++) {
		cin >> num;
		if (num != 0)
			s1.push(num);
		else
			s1.pop();
	}
	while (!s1.empty()) {
		sum += s1.top();
		s1.pop();
	}
	cout << sum << endl;
}