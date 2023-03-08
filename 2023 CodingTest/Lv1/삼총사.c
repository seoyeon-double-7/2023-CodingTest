// 문제 설명

/* 
    학교 학생 3명의 정수 번호를 더했을 때 0이 되면 3명의 학생은 삼총사입니다.
    예를 들어, 5명의 학생이 있고, 각각의 정수 번호가 순서대로 -2, 3, 0, 2, -5일 때, 
    첫 번째, 세 번째, 네 번째 학생의 정수 번호를 더하면 0이므로 세 학생은 삼총사입니다.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;
    int i, j, k;
    int sum = 0;
    for (i = 0; i < number_len; i++) {
        for (j = i + 1; j < number_len; j++) {
            for (k = j + 1; k < number_len; k++) {
                sum = number[i] + number[j] + number[k];
                if (sum == 0) {
                    answer++;
                }
            }
        }
    }

    return answer;
}
