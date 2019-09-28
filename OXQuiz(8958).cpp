#include<iostream>
#include<string>
using namespace std;

int main() {
	int test = 0;
	string input;
	
	cin >> test;
	while (test) {
		int tempScore = 0;
		int finalScore = 0;
		cin >> input;//OOXXOXXOOO
		for (int i = 0;i < input.length();i++) {
			if (input[i] == 'O') {
				tempScore++;
				finalScore += tempScore;
			}
			else//if input[i] == 'X'
				tempScore = 0;
		}
		cout << finalScore << endl;
		test--;
	}
	return 0;
}