#include<iostream>
using namespace std;
//

int main() {
	int coins[6] = { 500, 100, 50, 10, 5, 1 };
	int bill = 1000;
	int payment = 0;
	int coin_count = 0;
	cin >> payment;
	bill -= payment;//620¿ø °Å½º¸§µ·
	int i = 0;
	while (bill != 0) {
		if (bill >= coins[i]) {
			coin_count = bill / coins[i];
			bill %= coins[i];
			i++;
		}
	}
	/*while (bill != 0) {
		if (bill >= 500) {
			bill -= 500;
			coin_count++;
		}
		else if (bill >= 100) {
			bill -= 100;
			coin_count++;
		}
		else if (bill >= 50) {
			bill -= 50;
			coin_count++;
		}
		else if (bill >= 10) {
			bill -= 10;
			coin_count++;
		}
		else if (bill >= 5) {
			bill -= 5;
			coin_count++;
		}
		else if (bill >= 1) {
			bill -= 1;
			coin_count++;
		}
	}*/
	cout << coin_count << endl;
	return 0;
}