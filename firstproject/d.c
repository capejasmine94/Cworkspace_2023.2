/*// 1-1 예제
// printf() 를 이용해서 hello 출력 해보기 
#include <stdio.h>          // 표준입출력함수인 stdio.h 를 include(포함)한다는 의미
int main(void)              // main함수(메개변수는 없는데 무언가 작동하면 int로 반환하는 함수로 선언한다는 뜻) 
{                           // main 함수 영역의 시작(main함수는 {} 시작끝 필수로 사용)
    printf("hello, world!\n");// 문자열을 호출하는 함수 사용하기 (\n 띄워쓰기 기능 활용))
    return 0 ;              // 결과 값을 반환한다
}                           // mian 함수 영역의 끝
*/
/* // 1-2 예제
//두 수를 입력 받아서 연산후 출력 해보기
#include <stdio.h>                      // 표준입출력함수인 stdio.h 를 include(포함)한다는 의미
#pragma warning(disable:4996)           //권장하지 않는 함수 사용에 대한 경고 메세지 무시 (또는 difine_CRT_SECURE_NO_WARNINGS 사용))

int a, b, c;                            // 정수의 변수를 선언(c언어에서는 변수를 사용하기전에 선언 해주어야한다)
int product(int x, int y);              // 함수 원형 선언(함수가 사용되기 전에 사용할것)

int main(void)                          // main함수(메개변수는 없는데 무언가 작동하면 int로 반환하는 함수로 선언한다는 뜻) 
{                                       // main 함수 영역의 시작(main함수는 {} 시작,끝 필수로 사용)
    // 첫번째 숫자 입력.
    printf("첫번째 숫자를 입력하세요 : ");    //첫번째 수를 입력 받기전에 질문을 만들어서 화면에 출력시키기
    scanf("%d", &a);                   //변환기호로 정수형 입력 양식을 나태내주기, scanf를 사용할때는 변수 앞에 & 꼭 사용해주기)
    
    // 두번째 숫자 입력.
    printf("두번째 숫자를 입력하세요 : ");   //두번째 수를 입력 받기전에 질문을 만들어서 화면에 출력시키기     
    scanf("%d", &b);                  //변환기호로 정수형 입력 양식을 나태내주기, scanf를 사용할때는 변수 앞에 & 꼭 사용해주기)
    
    // 입력받은 두 수의 곱 계산.
    c = product(a, b);                // 함수 호출(프로그램 문에서 함수의 이름을 포함시킴으로 실행이 된다)
    printf("두 수의 곱셈 결과 : %d \n", c); //결과값 함수 호출하기(첫번째 숫자와 두번째 숫자가 곱한 숫자을 나타내준다)     
    return 0;                       // 결과 값을 반환한다
}                                   // mian 함수 영역의 끝
int product(int x, int y)           // 위에서 선언했던 내용을 정의 시켜준다 
{                                   // 함수 영역의 시작
    return (x * y);                 // 두개의 값을 곱하고 결과를 되돌려 받는다라는 뜻
}                                   // 함수 영역의 끝
*/
/*// 예제 2-1
#include <stdio.h>   //표준입출력함수인 stdio.h 를 include(포함)한다는 의미
int main(void)       // main함수(메개변수는 없는데 무언가 작동하면 int로 반환하는 함수로 선언한다는 뜻) 
{                    // 함수 영역의 시작
//sizeof() 를 통해서 원하는 자료형의 크기를 나타낼수 있다
//정수형을 입력받는 변환기호 를 쓰게되면서 함수를 호출하면 값 을 얻을수있지만
//sizeof 앞에 반환해주는 int를 사용해줌으로써 warning을 미연에 방지할수있다.

    printf("char의 자료형 크기: %dbyte\n", (int)sizeof(char));                                      //char의 크기를 나타내는 함수 호출하기
    printf("signed char의 자료형 크기: %dbyte\n", (int)sizeof(signed char));                        //signed char의 크기를 나타내는 함수 호출하기
    printf("unsigned char의 자료형 크기: %dbyte\n", (int)sizeof(unsigned char));                    //unsigned char의 크기를 나타내는 함수 호출하기
    printf("short의 자료형 크기 : %dbyte\n", (int)sizeof(short));                                   //short의 크기를 나타내는 함수 호출하기
    printf("short int의 자료형 크기: %dbyte\n", (int)sizeof(short int));                            //short int의 크기를 나타내는 함수 호출하기
    printf("signed short의 자료형 크기: %dbyte\n", (int)sizeof(signed short));                      //signed short의 크기를 나타내는 함수 호출하기
    printf("signed short int의 자료형 크기: %dbyte\n", (int)sizeof(signed short int));              //signed short int의 크기를 나타내는 함수 호출하기
    printf("unsigned short의 자료형 크기: %dbyte\n", (int)sizeof(unsigned short));                  //unsigned short의 크기를 나타내는 함수 호출하기
    printf("unsigned short int의 자료형 크기: %dbyte\n", (int)sizeof(unsigned short int));          //unsigned short int의 크기를 나타내는 함수 호출하기
    printf("int의 자료형 크기: %dbyte\n", (int)sizeof(int));                                        //int의 크기를 나타내는 함수 호출하기
    printf("signed int의 자료형 크기: %dbyte\n", (int)sizeof(signed int));                          //signed int의 크기를 나타내는 함수 호출하기
    printf("long의 자료형 크기: %dbyte\n", (int)sizeof(long));                                      //long의 크기를 나타내는 함수 호출하기
    printf("long int의 자료형 크기: %dbyte\n", (int)sizeof(long int));                              //long int의 크기를 나타내는 함수 호출하기
    printf("signed long의 자료형 크기: %dbyte\n", (int)sizeof(signed long));                        //signed long의 크기를 나타내는 함수 호출하기
    printf("signed long int의 자료형 크기: %dbyte\n", (int)sizeof(signed long int));                //signed long int의 크기를 나타내는 함수 호출하기
    printf("unsigned long의 자료형 크기: %dbyte\n", (int)sizeof(unsigned long));                    //unsigned long의 크기를 나타내는 함수 호출하기
    printf("unsigned long int의 자료형 크기: %dbyte\n", (int)sizeof(unsigned long int));            //unsigned long int의 크기를 나타내는 함수 호출하기
    printf("long long의 자료형 크기: %dbyte\n", (int)sizeof(long long));                            //long long의 크기를 나타내는 함수 호출하기
    printf("long long int의 자료형 크기: %dbyte\n", (int)sizeof(long long int));                    //long long int의 크기를 나타내는 함수 호출하기
    printf("signed long long 의 자료형 크기: %dbyte\n", (int)sizeof(signed long long));             //signed long long의 크기를 나타내는 함수 호출하기
    printf("signed long long int의 자료형 크기: %dbyte\n", (int)sizeof(signed long long int));      //signed long long int의 크기를 나타내는 함수 호출하기
    printf("unsigned long long의 자료형 크기: %dbyte\n", (int)sizeof(unsigned long long));          //unsigned long long의 크기를 나타내는 함수 호출하기
    printf("unsigned long long int의 자료형 크기: %dbyte\n", (int)sizeof(unsigned long long int));  //unsigned long long int의 크기를 나타내는 함수 호출하기
    printf("float의 자료형 크기: %dbyte\n", (int)sizeof(float));                                    //float의 크기를 나타내는 함수 호출하기
    printf("long double의 자료형 크기: %dbyte\n", (int)sizeof(long double));                        //long double의 크기를 나타내는 함수 호출하기
    return 0;       // 결과 값을 반환한다                                                          
}                   // 함수 영역의 끝
*/

#include <stdio.h>                          //표준입출력함수인 stdio.h 를 include(포함)한다는 의미   
// define : 단순매크로로 기호상수 기능에서 많이 사용한다       
#define IN "원의 반지름 : 55\n"               //매크로를 사용해 문제를 정의해두기
#define PI 3.141592                         //파이를 매크로를 사용해 미리 상수로 정의해둔다
#define AREA(R) (PI*(R)*(R))                //원의 면적을 구하는 공식을 정의해두기
#define OUTPUT printf("원의 면적을 구했습니다!\n프로그램을 종료해주세요.\n") //프로그램 끝 문장 정의해두기 

int main(void)                              //main함수(메개변수는 없는데 무언가 작동하면 int로 반환하는 함수로 선언한다는 뜻) 
{                                           //함수 영역의 시작
    printf("%s", IN);                       //매크로를 사용해 정의했던 문구 출력하기 
    printf("원의 면적 : %.0f\n", AREA(55));  // 매크로를 사용해서 정의했던 공식을 활용해서 대입후 실수를 나타내는 변환기호 사용(변환기호 앞에 .숫자 사용하면 호출 하는 소수점자리까지 반올림후 표시 해준다) 
    OUTPUT;                                 //매크로로 정의했던 문구 출력
}                                           //함수 영역의 끝   


#include <stdio.h>                                  //표준입출력함수인 stdio.h 를 include(포함)한다는 의미   
// define : 매크로를 사용해서 덧셈,뺄셈 공식 만들기(매크로명은 대문자로 작성하는게 관례이다) 
#define ADD(x, y) ((x) + (y))                       //매크로를 사용해 덧셈공식 만들어주기 (매개변수는 괄호로 감싸주기!(감싸지 않으면 연산자 우선순위 문제가 생길수있음))
#define SUB(x, y) ((x) - (y))                       //매크로를 사용해 뺄셈공식 만들어주기 (매개변수는 괄호로 감싸주기!(감싸지 않으면 연산자 우선순위 문제가 생길수있음))
int main(void)                                      //main함수(메개변수는 없는데 무언가 작동하면 int로 반환하는 함수로 선언한다는 뜻) 
{                                                   //함수 영역의 시작
// result : ADD(),SUB 를 계산한 결과를 저장하는 변수이다. result 변수를 사용하지 않고는 계산한 값에 대한 출력이나 처리를 할 수 없으니 꼭 사용해준다.
    int add_result, sub_result;                     // 두개의 정수형 변수를 선언한다
    printf("두 덧셈의 합은 %d 입니다.\n",ADD(94,17));    // 문자열을 출력받고 매크로로 사용했던 공식을 받아와서 변환기호(%d)가 ADD의 반환값으로 대체된다
    printf("두 뺄셈의 합은 %d 입니다.\n",SUB(94,17));    // 문자열을 출력받고 매크로로 사용했던 공식을 받아와서 변환기호(%d)가 SUD의 반환값으로 대체된다
    return 0 ;                                      // 결과 값을 반환한다 
}                                                   //함수 영역의 끝 


180
44

15
105