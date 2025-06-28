/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
   printf("enter the number");
   scanf("%d",&a);
   if(a>0){
       printf("a is positive");
   }
   else if(a<0){
       printf("a is negative");
   }
   else{
       printf("a is zero");
   }
   return 0;
}


