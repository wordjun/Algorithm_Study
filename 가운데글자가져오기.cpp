#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int strlen = s.length();
    int midindex = 0;
    if (strlen % 2 == 0)//Â¦¼ö
    {
        midindex = (strlen / 2) - 1;
        answer.push_back(s[midindex]);
        answer.push_back(s[++midindex]);
    }
    else {//È¦¼ö
        midindex = strlen / 2;
        answer = s[midindex];
    }
    return answer;
}