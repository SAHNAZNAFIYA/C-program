/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the sides");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a==b==c){
        printf("it is an equilateral Triangle");
    }
    else if(a+b<c){
        printf("Triangle is not possible");
    
    }
    
    else if(a+b>c){
        printf("Triangle is possible");
        
    }
    else{
        printf("not a triangle");
    }

    return 0;
}
