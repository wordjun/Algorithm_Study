#include<iostream>
using namespace std;

int hanoi_tower(int, int, int);
int move_disk(int, int, int);
int hanoi_count = 0;

int main() {
	int num = 0;
	cin >> num;
	hanoi_tower(num, 1, 3);
	cout << hanoi_count << endl;
	
	return 0;
}
//recursion
int hanoi_tower(int disk_num, int start, int end) {//from A to B, using C as 
	//base case
	if (disk_num == 0)
		return 0;

	// 1+2+3 sums up to 6, middle collar becomes 6 - (start+end)
	int mid_column = 6 - (start + end);

	hanoi_tower(disk_num-1, start, mid_column);
	move_disk(disk_num, start, end);
	hanoi_tower(disk_num-1, mid_column, end);
}

int move_disk(int disk_num, int start, int end) {
	cout << start <<" "<< end << endl;
	hanoi_count++;
	return hanoi_count;
}