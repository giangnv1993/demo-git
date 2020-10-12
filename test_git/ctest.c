#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dev1(void);
void dev2(void);




int main()
{
    dev1();
    dev2();
       
    return 0;
}




void dev1(void)
{
    printf("dev1\r\b");
}
void dev2(void)
{
    printf("dev2");
}
