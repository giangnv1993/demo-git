#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a[15];

int main()
{
    int ui = 0;
    for (ui = 0; ui < 14; ui ++)
    {
        a[ui] = ui;
         printf("a[%d] = %d\r\n", ui, a[ui]);
    }

    int N;
    printf("nhap vao so N = ");
    scanf("%d", &N);
       
    return 0;
}
