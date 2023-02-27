#include <stdio.h>

int main(void){ //구구단 예시
    /* for (int i = 2; i <= 9; i++){
        printf("구구단 %d단\n", i);
        for(int j = 1; j <= 9; j++){
        printf("   %d * %d = %d\n", i, j, i * j);
        }
    } */
    //별 예시
    for (int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
        printf("*");
        }
        printf("\n");
    }

    return 0;
}