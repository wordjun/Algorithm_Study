<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
   //�ִ� �� ���� �μ��� ��ǰ�� ������ �� �ִ���?
    //ex) [1, 3, 2, 5, 4]
    int sum = 0, maxCount = -1, index = 0;
    
    //�ִ��� ���� �μ��� �����Ϸ��� ���� ���� �ݾ��� ��û�� �μ����� �����ϸ� �ȴ�.
    //���� ������������ ���� ��, ������ �ѱ�� ������ count�Ѵ�
    sort(d.begin(), d.end());
    while (sum < budget) {
        sum += d[index];
        index++;
    }
    if (sum <= budget)
        return index;
    else
        return index - 1;
}

int main() {
    vector<int>v1 = { 1,3,2,5,4 };
    cout << solution(v1, 9)<<'\n';
=======
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
   //�ִ� �� ���� �μ��� ��ǰ�� ������ �� �ִ���?
    //ex) [1, 3, 2, 5, 4]
    int sum = 0, maxCount = -1, index = 0;
    
    //�ִ��� ���� �μ��� �����Ϸ��� ���� ���� �ݾ��� ��û�� �μ����� �����ϸ� �ȴ�.
    //���� ������������ ���� ��, ������ �ѱ�� ������ count�Ѵ�
    sort(d.begin(), d.end());
    while (sum < budget) {
        sum += d[index];
        index++;
    }
    if (sum <= budget)
        return index;
    else
        return index - 1;
}

int main() {
    vector<int>v1 = { 1,3,2,5,4 };
    cout << solution(v1, 9)<<'\n';
>>>>>>> 79e753052dde2caa3d0ad3df4380779947a9bdba
}