#include<iostream>
#include<map>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string str;
	map<char, int> letters;
	cin >> str;//getting an input

	//converting all letters to lowercase
	for (int i = 0; i < str.size();i++) {
		str[i] = tolower(str[i]);
	}

	//add each letters to map(dictionary)
	for (int i = 0;i < str.size();i++) {
		letters[str[i]]++;
	}

	char most_used = str[0];//counter for most used alphabet
	map<char, int>::iterator it;
	for (it = letters.begin(); it != letters.end(); it++) {
		if (letters[it->first] > letters[most_used]) {
			most_used = it->first;
		}

	}

	//find letters that have same values
	int most_used_letter_value = letters[most_used];
	for (it = letters.begin(); it != letters.end(); it++) {
		if (letters[it->first] == most_used_letter_value && letters[it->first] != letters[most_used]) {//loop through the map except for the most used letter
			cout << '?';
			return 0;
		}
	}
	most_used = toupper(most_used);
	cout<< most_used;
	return 0;
}