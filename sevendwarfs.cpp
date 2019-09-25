#include<iostream>
using namespace std;

int *arr = new int[9];
//시간제한 2초
//7명의 합이 100
//9명에서 두명빼서 그 합이 100이 될떄
void swap(int, int);
int main() {
	int sumOf9 = 0;
	int temp1 = 0, temp2 = 0;
	for (int i = 0;i < 9;i++) {
		cin >> arr[i];
		sumOf9 += arr[i];
	}
	int sum = 0;
	for (int i = 0;i < 9;i++) {
		sum = sumOf9;
		sum -= arr[i];
		for (int j = i+1;j < 9;j++) {
			sum -= arr[j];
			if (sum == 100)
				temp1 = i, temp2 = j;
		}
	}
	arr[temp1] = 0, arr[temp2] = 0;
	int temp = 0;
	int max = arr[0];
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			if (arr[j] < arr[j - 1]) {
				swap(j, j-1);
			}
		}
	}
	for (int i = 2;i < 9;i++)
		cout << arr[i] << "\n";
}

void swap(int n1, int n2) {
	int temp = arr[n1];
	arr[n1] = arr[n2];
	arr[n2] = temp;
}