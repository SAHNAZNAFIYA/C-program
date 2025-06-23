/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int val,i=0,pro,sum=0;
    printf("enter");
    scanf("%d",&val);
    while(val>0){
        pro=val%10;
        int fac=1;
        for(i=pro;i>0;i--){
            
            fac*=i;
        
        }
        sum+=fac;
        val/=10;
    }
    
        printf("%d",sum);
    return 0;
    
}