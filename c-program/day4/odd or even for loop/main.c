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
    int i=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        
        if(i%2!=0){
            printf("%d is odd\n",i);
        }
    }
    return 0;
}
