#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> v1(10, 0);//0으로 초기화된 10개의 원소를 가짐
vector<int> v2;//입력받은 수를 v1에 비교할 벡터
int main() {
	int test = 0, beauty;

	string num;
	cin >> test;
	while (test) {
		beauty = 0;//initialize

		cin >> num;
		for (int i = 0;i < num.length();i++)
			v2.push_back(num[i]-48);
		
		int temp=0;
		for (int i = 0;i < 10;i++) {
			while (i == v2[temp] && v1[i] == 0) {
				v1[i] = 1;//있으면 1로 만들기
				temp++;
			}
		}
		for (int i = 0;i < 10;i++)
			beauty += v1[i];
		cout << beauty << endl;
		test--;
	}
	

	return 0;
}