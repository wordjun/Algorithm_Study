#include <vector>
#include <iostream>
#include<cmath>
using namespace std;

int maxNum = -1;

bool isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    vector<int>temp;
    int answer = 0;
    int sum = 0;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                sum = nums[i] + nums[j] + nums[k];
                
                if (isPrime(sum))
                    answer++;
            }
        }
    }

    return answer;
}