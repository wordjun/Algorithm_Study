#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	queue<int> q1;
	int test = 0, num =0;
	cin >> test;
	string input;
	while (test) {
		cin >> input;
		if (input == "push") {
			cin >> num;
			q1.push(num);
		}
		else if (input == "pop") {
			if (q1.empty())
				cout << -1 << endl;
			else {
				cout << q1.front() << endl;
				q1.pop();
			}
		}
		else if (input == "size")
			cout << q1.size() << endl;
		else if (input == "empty")
			cout<<q1.empty() << endl;
		else if (input == "front") {
			if (q1.empty())
				cout << -1 << endl;
			else
				cout << q1.front() << endl;
		}
		else if (input == "back") {
			if (q1.empty())
				cout << -1 << endl;
			else
				cout << q1.back() << endl;
		}
		test--;
	}
	return 0;

}