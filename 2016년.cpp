#include <string>
#include <vector>
#include<iostream>
using namespace std;

int months[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
vector<string> days = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

string solution(int a, int b) {
    string answer = "";
    
    int sum = 0;
    for (int i = 0; i < a - 1; i++) {
        sum += months[i];
    }
    sum += b;
    sum %= 7;
    sum += 4;//"FRI"
    if (sum >= 7) {
        sum -= 7;
    }
    answer = days[sum];
    return answer;
}

int main() {
    cout << solution(5, 24);
}