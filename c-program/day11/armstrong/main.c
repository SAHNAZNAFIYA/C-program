/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int val=153,sum=0,temp,n;
    temp=val;
    while(val>0){
        n=val%10;
        sum+=(n*n*n);
        val/=10;
    }
    if (sum==temp){
         printf("%d is an armstrong number",sum);
    }
    else{
        printf("not");
    }
   

    return 0;
}