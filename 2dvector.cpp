#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<vector<int>> v;
	vector<int> temp;
	temp.push_back(1), temp.push_back(2), temp.push_back(3);
	v.push_back(temp);

	temp.clear();
	temp.push_back(4), temp.push_back(5), temp.push_back(6);
	v.push_back(temp);
	for(auto& i: v)
		cout << i[0] << " "<<i[1]<<" " <<i[2]<<'\n';
	return 0;
}