#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int strlen = s.length();
    int midindex = 0;
    if (strlen % 2 == 0)//¦��
    {
        midindex = (strlen / 2) - 1;
        answer.push_back(s[midindex]);
        answer.push_back(s[++midindex]);
    }
    else {//Ȧ��
        midindex = strlen / 2;
        answer = s[midindex];
    }
    return answer;
}