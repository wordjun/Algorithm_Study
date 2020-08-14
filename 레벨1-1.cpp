<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
   //최대 몇 개의 부서에 물품을 지원할 수 있는지?
    //ex) [1, 3, 2, 5, 4]
    int sum = 0, maxCount = -1, index = 0;
    
    //최대한 많은 부서를 지원하려면 가장 적은 금액을 신청한 부서부터 지원하면 된다.
    //따라서 오름차순으로 정렬 후, 예산을 넘기기 전까지 count한다
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
   //최대 몇 개의 부서에 물품을 지원할 수 있는지?
    //ex) [1, 3, 2, 5, 4]
    int sum = 0, maxCount = -1, index = 0;
    
    //최대한 많은 부서를 지원하려면 가장 적은 금액을 신청한 부서부터 지원하면 된다.
    //따라서 오름차순으로 정렬 후, 예산을 넘기기 전까지 count한다
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