/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=0,n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("FOR LOOP\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    
    while(i<=5){
        printf("%d",i);
        i++;
    }
    do{
     
        printf("%d",i);
        i++;
    }while(i<=n);

    return 0;
}