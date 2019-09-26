#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec;
//시간제한 2초
//7명의 합이 100
//9명에서 두명빼서 그 합이 100이 될떄
void print();
int main() {
	int sum = 0;
	int num = 0;
	int temp1 = 0, temp2 = 0;
	for (int i = 0;i < 9;i++) {
		cin >> num;
		vec.push_back(num);
		sum += num;
	}
	sum -= 100;//will give sum of two numbers
	//sort array arr
	sort(vec.begin(), vec.end());
	for (int i = 0;i < 9;i++) {
		for (int j = i+1;j < 9;j++) {
			int temp = 0;
			temp += vec[i];//first subtraction
			temp += vec[j];//second subtraction
			if (temp == sum) {//if we found two numbers that add up to temp
				temp1 = i, temp2 = j;//save the index
				break;
			}
		}
	}
	//cout << "index1: " << temp1 << " index2: " << temp2 << endl;//4, 8
	vec.erase(vec.begin() + temp1);
	vec.erase(vec.begin() + temp2 - 1);
	print();
}

void print() {
	for (int i = 0;i < vec.size();i++)
		cout << vec[i] << "\n";
}