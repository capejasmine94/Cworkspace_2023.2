/* #include <stdio.h> // 11번 문제
int main(void){
    float  i ;
    scanf("%f", &i);
    printf("%f\n", i);
    return 0;
}

#include <stdio.h> // 12번 문제 
int main(void){
    int a, b ;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b) ;
    return 0 ;
} 

#include <stdio.h> // 13번 문제
int main (void){
    char x,y ;
    scanf("%c %c", &x, &y);
    printf("%c %c\n", y, x );
    return 0;
}

#include <stdio.h> // 14번 문제
int main(void){
    float i ;
    scanf("%f", &i);
    printf("%.2f\n", i);
    return 0;
} 

#include <stdio.h> // 15번 문제
int main (void) { 
    int i ;
    scanf("%d", &i);
    printf("%d %d %d\n", i, i, i);
    return 0;
} 

#include <stdio.h> // 16번 문제

int main (void) {
    int h,m ;
    scanf("%d:%d", &h, &m);
    printf("%d:%d\n", h, m);
    return 0;
} 
#include <stdio.h> // 17번 문제

int main(void){
    int y, m, d ;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%04d.%02d.%02d\n", y, m, d);
    return 0;
    // (%02d를 사용하면 2칸을 사용해 출력하는데, 한 자리 수인 경우 앞에 0을 붙여 출력한다.)

} 
#include <stdio.h> // 18번 문제 

int main(void){
    int f, b ;
    scanf("%d-%d", &f, &b);
    printf("%06d%06d\n", f, b);
    return 0;
} 

#include <stdio.h> // 19번 문제

int main(void){
    char data[51];
    scanf("%s", data);
    printf("%s\n", data);
    return 0;
} */ 

#include <stdio.h> // 20번 문제

int main(void){
    char data[2000];
    fgets(data, 2000, stdin);
    printf("%s\n", data);
    return 0;
//fgets( ) 를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다.
//fgets(변수명, 글자수, stdin) = 공백문자 포함 글자 출력
}  

