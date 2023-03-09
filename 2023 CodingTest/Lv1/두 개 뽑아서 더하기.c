#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len)
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer;
    int num[10001];
    int len = 0, temp;

    for (int i = 0; i < numbers_len - 1; i++)//각 숫자끼리 덧셈
    {
        for (int j = i + 1; j < numbers_len; j++)
        {
            num[len++] = numbers[i] + numbers[j];
        }
    }

    for (int i = 0; i < len - 1; i++)//선택정렬 오름차순
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {
            if (num[j] < num[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            temp = num[i];
            num[i] = num[min];
            num[min] = temp;
        }
    }

    answer = (int*)malloc(sizeof(int) * len);//모든수를 더한 개수 len 만큼 동적할당

    for (int i = 0, n = 0; i < len; i++)//answer배열 자리 변수 n 선언
    {
        answer[n++] = num[i];
        while (num[i] == num[i + 1]) i++; //겹치는 숫자 건너뛰기
    }

    return answer;
}