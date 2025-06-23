/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int val1=123,val2=456,rev=0,temp;
    temp=val2;
    while(val2>0){
        rev=rev*10+val2%10;
        val2/=10;
    }
    while(rev>0){
        val1=val1*10+rev%10;
        rev/=10;
    }
    printf("%d",val1);
    return 0;
}
