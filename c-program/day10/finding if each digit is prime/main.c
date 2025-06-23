/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("enter");
    int n,rev;
    scanf("%d",&n);
    while(n>0){
        int count=0;
        rev=n%10;
    
    for(int i=1;i<=rev;i++){
        if(rev%i==0){
            count++;
        }}
        if(count==2){
            
                printf("%d",rev);
    }
    n/=10;
    }
    return 0;
}
