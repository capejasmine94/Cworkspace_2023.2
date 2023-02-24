#include <stdio.h> //상수 예제

int main(void) {
    /* int YEAR = 1972 ; //const 를 안써서 변경 가능 
    printf("c 언어가 발표된 연도 : %d\n", YEAR);
    YEAR = 1988 ; 
    printf("c 언어가 발표된 연도 : %d\n", YEAR); */
    const int YEAR = 1994 ; //const 를 사용하면 변경 불가 : 상수 라고 한다
    printf("심규진 태어난 년도 : %d\n", YEAR);
    return 0 ;
}