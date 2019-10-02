#include<iostream>
using namespace std;

int main() {
	//2girls, 1boy form a team
	//N girls, M boys
	int N = 0, M = 0, K = 0;
	int total_teams = 0;
	int team = 0, remainder = 0;

	cin >> N >> M >> K;
	//make as many teams as possible
	while (1) {
		if (N  <= 1 || M <= 0) {//if either girls or boys become less than 0, save any remaining people, then escape the while loop
			remainder = N + M;
			break;
		}
		else
			N -= 2, M--, total_teams++;
	}
	//deduct people from (teams) + (remainding people without teams)
	int temp = total_teams * 3;//a temporary variable to store total number of grouped people
	K -= remainder;
	//if there's still K left, reduce from grouped teams
	temp -= K;
	total_teams = temp / 3;
	cout << total_teams << endl;
	return 0;
}