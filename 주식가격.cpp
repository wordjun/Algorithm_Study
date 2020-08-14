#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(prices_len);
    int count;
    for (int i = 0; i < prices_len - 1; i++) {
        count = 0;
        for (int j = i + 1; j < prices_len; j++) {
            if (prices[i] <= prices[j]) {//현재값이 이전것보다 크거나 같은 경우
                count++;
            }
            else {
                count++;
                break;
            }
        }
        answer[i] = count;
    }
    answer[prices_len - 1] = 0;//마지막은 항상 0
    return answer;
}