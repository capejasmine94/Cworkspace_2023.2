#include <stdio.h>

int main(void){
    int i = 1 ;
    while (i <= 10){
        printf("Hello world %d\n", i++);
       // i++ ; 다음줄에 증감연술자 넣어도 사용가능
    }
    return 0;
}