/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char alp;
    printf("enter");
    scanf("%c",&alp);
    
    if(alp>=97 && alp<=122 || alp>=65 && alp<=90 ){
        printf("it is");
    }
    else{
        printf("not");
    }

    return 0;
}