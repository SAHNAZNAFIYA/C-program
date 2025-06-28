/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=12,sq,rev=0,rev1=0,i;
    sq=num*num;
    while(num<0){
        rev=rev*10+(num%10);
        num/=10;
    }
    printf("%d\n",rev);
    rev=rev*rev;
    while(rev<0){
        rev1=rev1*10+(rev%10);
        rev/=10;
        
    }
     printf("%d",rev1);
    if(rev1==sq){
        printf("it is a adam number");
    }
    else{
        printf("it is not a adam number");
    }
    
    

    return 0;
}
