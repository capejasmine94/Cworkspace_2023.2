#include <stdio.h>
    void say_hello(void);
int main(void)
{
    int x, y, z ;
    x = 1 ;
    y = 20 ;
    z = 3 ;

    say_hello();

    return 0 ;
}

    void say_hello(void)
    {
        int x = 1;
        x = 10 ;
        printf("Hello, World!\n");
        return ;
    }