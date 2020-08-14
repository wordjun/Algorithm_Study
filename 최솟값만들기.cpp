#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool ascending(int a, int b) {
    return a < b;
}
bool descending(int a, int b) {
    return a > b;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end(), ascending);//A�� ������������
    sort(B.begin(), B.end(), descending);//B�� ������������
    int length = A.size();
    for (int i = 0; i < length;i++) {
        answer += A[i] * B[i];
    }
    return answer;
}