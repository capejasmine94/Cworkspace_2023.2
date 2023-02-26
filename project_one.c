#include <stdio.h>

int main(void){
    /* //이름,나이,키,몸무게,범죄명
    //이름
    char name[100];
    printf("이름이 뭔가요? ");
    scanf("%s", name);
    //나이
    int age;
    printf("몇살 인가요?");
    scanf("%d", &age);
    //키
    float height ;
    printf("키 가 몇이에요?");
    scanf("%f", &height);
    //몸무게
    double weight;
    printf("몸무게는요?");
    scanf("%lf", &weight);
    //범죄명
    char what[50];
    printf("범죄명은요?");
    scanf("%s", what);
    //조서내용
    printf("\n\n-- 조서내용 --\n");
    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("키 : %.0f\n", height);
    printf("몸무게 : %.0lf\n", weight);
    printf("범죄명 : %s\n", what);
    return : 0 ; */
    //회원정보 예제 2
    char name[100];
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    
    char id[200];
    printf("아이디를 입력하세요 : ");
    scanf("%s", id);

    int age ;
    printf("나이를 입력하세요 : ");
    scanf("%d", &age);

    char birthday[300];
    printf("생일을 입력하세요 : ");
    scanf("%s", birthday);
    
    int footSize ;
    printf("신발크기를 입력하세요 : ");
    scanf("%d", &footSize);

    printf("\n\n-- 회원정보 --\n");
    printf("이름 : %s\n", name);
    printf("아이디 : %s\n", id);
    printf("나이 : %d\n", age);
    printf("생일 : %s\n", birthday);
    printf("신발사이즈 : %d\n", footSize);
    return 0;
}