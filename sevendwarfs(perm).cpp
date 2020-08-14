#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;
vector<int> brr;

int main() {
	//난쟁이들 키 대입
	int height = 0;
	int sum = 0;
	for (int i = 0;i < 9;i++) {
		cin >> height;
		arr.push_back(height);
		sum += height;
	}
	//sum에서 100 빼기
	sum -= 100;

	sort(arr.begin(), arr.end());//sort vector arr

	for (int i = 0;i < 2;i++)//the two 1s will be the ones
		brr.push_back(1);
	for (int i = 0;i < 7;i++)
		brr.push_back(0);

	sort(brr.begin(), brr.end());//vector brr sort
	//by far we now have 000000011
	//via permutation, we find a combination that will give us the two correct 1s.
	int t1, t2;//index for the two numbers
	int temp;
	do{
		t1 = 0, t2 = 0, temp = 0;
		for (int i = 0;i < 9;i++) {
			if (brr[i] == 1) {//if it's 1, add it up
				temp += arr[i];
				if (t1 != 0)//if there's already t1
					t2 = i;
				else
					t1 = i;
			}
		}
		if (temp == sum)//if the addition of two 1s add up and equal to sum
			break;
	} while (next_permutation(brr.begin(), brr.end()));

	//OUTPUT
	for (int i = 0;i < t1;i++)
		cout << arr[i] << "\n";
	for (int i = t1+1;i < t2;i++)
		cout << arr[i] << "\n";

	return 0;
}