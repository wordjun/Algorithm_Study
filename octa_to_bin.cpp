#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> binNum;//a vector to store binary digits

int main() {
	//given an octa number, convert it into binary digits
	string octaNum;
	cin >> octaNum;

	//create an array to store the numbers in int type
	int* octaArr = new int[octaNum.length()];

	for (int i = 0;i < octaNum.length();i++) {
		octaArr[i] = octaNum[i] - '0';
		int quotient = 0;
		int remainder = 0;
		while (octaArr[i] > 0) {
			quotient = octaArr[i] / 2;
			remainder = octaArr[i] % 2;
			if (quotient < 2) {
				binNum.push_back(quotient);
				binNum.push_back(remainder);
				break;
			}
			else //quotient >= 2
				binNum.push_back(remainder);
			octaArr[i] = quotient;
		}
	}
	for (int i=0;i<binNum.size();i++)
		cout<<binNum.at(i)<<" ";


}