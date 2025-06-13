/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the values");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is greater");
    }
    else if(b>c && b>a){
        printf("b is greater");
    
    }
    else{
        printf("c is greater");
    }
    
    return 0;
}
