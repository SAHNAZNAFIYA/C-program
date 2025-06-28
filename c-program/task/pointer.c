#include <stdio.h>

int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;
    printf("%d\n",*p1);
     printf("%p\n",&p2);
     printf("%p\n",**p3);
     printf("%p\n",*p2);
     printf("%p44\n",*p3);
    return 0;
}