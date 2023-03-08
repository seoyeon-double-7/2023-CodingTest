// 블로그 링크

/*
    https://velog.io/@cindy0817-web/%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%A8%B8%EC%8A%A4-Lv1-%EB%B0%94%ED%83%95%ED%99%94%EB%A9%B4-%EC%A0%95%EB%A6%AC-C
*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {

    // 좌측 상단 y, 우측 하단 y, 좌측 상단 x, 좌측 하단 x
    int minY = 50, maxY = 0, minX = 50, maxX = 0;
    int len = strlen(wallpaper[0]);
    int* answer = (int*)malloc(sizeof(1));

    for (int i = 0; i < wallpaper_len; i++) {
        for (int j = 0; j < len; j++) {
            if (wallpaper[i][j] == '#') {
                // y축 좌표 j가 minw보다 작으면 minh(좌측상단 y)로
                if (minY > j) minY = j;
                if (maxY < j) maxY = j;
                if (minX > i) minX = i;
                if (maxX < i) maxX = i;
            }
        }
    }

    // 좌측 상단 x,y 좌표는 그대로
    // 우측 하단 x,y 좌표는 1더해줌 (드래그 하면 한칸 밑으로 떨어짐)
    answer[0] = minX;
    answer[1] = minY;
    answer[2] = maxX + 1;
    answer[3] = maxY + 1;

    return answer;
}
