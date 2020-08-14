#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	int rows = 0;
	cin >> rows;
	int size = (rows*(rows + 1)) / 2;
	int j = 0, num=0, maxNum = 0;
	vector<int> v;

	for (int i = rows-1;i >= 0;i--) {
		j = rows - i;
		while (j) {
			cin >> num;
			v.push_back(num);
			j--;
			}
	}

	v[1] += v[0], v[2] += v[0];//10, 15
	maxNum = v[0];
	for (int i = 2;i < rows;i++) {
		int size1 = i * (i + 1) / 2;
		int size2 = (i + 1)*(i + 2) / 2;
		for (int j = size1; j < size2 ; j++)
		{
			//calculate parents of current node
			int left_parent = j - i - 1, right_parent = j - i;
			if (j == size1) {//leftmost node on the current row
				v[j] += v[right_parent];
			}
			else if (j == size2-1) {//rightmost node on the current row
				v[j] += v[left_parent];
			}
			else {//has both parents
				if (v[left_parent] <= v[right_parent])//left parent < right parent
					v[j] += v[right_parent];
				else
					v[j] += v[left_parent];
			}
			maxNum = max(maxNum, v[j]);
		}
	}
	cout << maxNum << endl;
	return 0;
}