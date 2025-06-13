/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i=0;
    printf("ENTER THE VALUE OF n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("%d fizzbuzz\n",i);
        }
        else if(i%5==0){
            printf("%d buzz\n",i);
        }
        else if(i%3==0){
            printf("%d fizz\n",i);
        } 
        else{
            printf("%d\n",i);
        }
        
    }

    return 0;
}
