#include<iostream>
using namespace std;

int main() {
	int X = 0, Y = 0, block = 0, cross = 0;
	int time_taken_blocks = 0, time_taken_cross = 0;
	int result = 0;
	cin >> X >> Y >> block >> cross;
	time_taken_blocks = (X * block) + (Y * block);

	int tempX = X, tempY = Y;
	while (tempX > 0 && tempY > 0) {
		time_taken_cross += cross;
		tempX--, tempY--;
	}

	if (tempX == 0 && tempY != 0)
		time_taken_cross += (tempY * block);
	else if (tempY == 0 && tempX != 0)
		time_taken_cross += (tempX * block);

	if (time_taken_blocks < time_taken_cross)
		result = time_taken_blocks;
	else if (time_taken_blocks > time_taken_cross)
		result = time_taken_cross;
	else//when same, either one's fine
		result = time_taken_blocks;

	cout << result << endl;
	return 0;
}