/* #include <stdio.h> // 21번 문제

int main(void){
    int a, b ;
    scanf("%d.%d", &a, &b) ;
    printf("%d\n%d\n", a, b);
    return 0;
} */

#include <stdio.h>

int main(void){
    int i ;
    char d[30];
    scanf("%s", &d);
    for(i=0; d[i]!='\0';i++){
    printf("%s\n", d);
    }
    return 0;

} 
