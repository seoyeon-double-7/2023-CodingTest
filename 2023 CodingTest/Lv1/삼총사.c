// ���� ����

/* 
    �б� �л� 3���� ���� ��ȣ�� ������ �� 0�� �Ǹ� 3���� �л��� ���ѻ��Դϴ�.
    ���� ���, 5���� �л��� �ְ�, ������ ���� ��ȣ�� ������� -2, 3, 0, 2, -5�� ��, 
    ù ��°, �� ��°, �� ��° �л��� ���� ��ȣ�� ���ϸ� 0�̹Ƿ� �� �л��� ���ѻ��Դϴ�.
*/

// ��α׸�ũ

/* 
    https://velog.io/@cindy0817-web/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-Lv1-%EC%82%BC%EC%B4%9D%EC%82%AC-C
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len�� �迭 number�� �����Դϴ�.
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
