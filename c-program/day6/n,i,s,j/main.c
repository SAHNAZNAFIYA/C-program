/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n;
   printf("enter n");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       for(int s=0;s<(n-(i+1));s++){
           printf("*");
       }
       for(int j=0;j<i+1;j++){
           printf(" ");
       }
       printf("\n");
   }
   return 0;
}
