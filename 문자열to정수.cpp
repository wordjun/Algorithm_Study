#include <string>
#include <vector>
#include <cmath>
#include<iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if (s[0] == '-') {
        int len = s.length() - 2;
        for (int i = 1; i < s.length(); i++) {
            answer += stoi(s[i]) * pow(10, len);
            len--;
        }
        answer *= -1;
    }
    else {
        int len = s.length() - 1;
        for (int i = 0; i < s.length(); i++) {
            answer += stoi(s[i]) * pow(10, len);
            len--;
        }
    }
    return answer;
}

int main() {
    cout << solution("-51729");
}