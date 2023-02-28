#include <stdio.h> // 20번 문제

int main(void){
    char data[2000];
    fgets(data, 2000, stdin);
    printf("%s\n", data);
    return 0;
//fgets( ) 를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
//fgets(변수명, 글자수, stdin) = 공백문자 포함 글자 출력
}  
