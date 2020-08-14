#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long answer = 0;
    for (int i = 0; i < (n / 2); i++) {
        if ((i * i) == n) {
            return (i + 1) * (i + 1);
        }
    }
    return -1;
}

int main() {

    return 0;
}