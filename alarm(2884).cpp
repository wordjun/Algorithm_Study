#include<iostream>
using namespace std;

int main()
{
	int hour = 0, minute = 0;
	cin >> hour >> minute;
	minute -= 45;
	if (minute < 0)
		{
			hour --;
			minute += 60;
		}

	if (hour < 0) {
		hour = 23;
	}
	cout << hour << " " << minute << endl;
}