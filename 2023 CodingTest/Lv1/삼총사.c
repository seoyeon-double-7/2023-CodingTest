// ���� ����

/* 
    �б� �л� 3���� ���� ��ȣ�� ������ �� 0�� �Ǹ� 3���� �л��� ���ѻ��Դϴ�.
    ���� ���, 5���� �л��� �ְ�, ������ ���� ��ȣ�� ������� -2, 3, 0, 2, -5�� ��, 
    ù ��°, �� ��°, �� ��° �л��� ���� ��ȣ�� ���ϸ� 0�̹Ƿ� �� �л��� ���ѻ��Դϴ�.
*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len�� �迭 number�� �����Դϴ�.
int solution(int number[], size_t number_len) {
    int answer = 0;
    for (int i = 0; i < number_len; i++) {
        for (int j = i + 1; j < number_len; j++) {
            for (int k = j + 1; k < number_len; k++) {
                if ((number[i] + number[j] + number[k]) == 0) {
                    answer++;
                    break;
                }
            }
        }
    }

    return answer;
}
}