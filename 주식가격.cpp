#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len�� �迭 prices�� �����Դϴ�.
int* solution(int prices[], size_t prices_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(prices_len);
    int count;
    for (int i = 0; i < prices_len - 1; i++) {
        count = 0;
        for (int j = i + 1; j < prices_len; j++) {
            if (prices[i] <= prices[j]) {//���簪�� �����ͺ��� ũ�ų� ���� ���
                count++;
            }
            else {
                count++;
                break;
            }
        }
        answer[i] = count;
    }
    answer[prices_len - 1] = 0;//�������� �׻� 0
    return answer;
}