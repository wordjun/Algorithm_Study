#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s1 = to_string(n);
    for (int i = s1.length() - 1;i >= 0;i--) {
        answer.push_back(s1[i] - '0');
    }
    return answer;
}

int main() {
    for (auto& i : solution(12345)) {
        cout << i << " ";
    }
}