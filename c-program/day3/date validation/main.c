/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int day,month,year,a;
    a=sizeof(year);
    
    printf("ENTER THE DAY/MONTH/YEAR");
    scanf("%d %d %d",&day,&month,&year);
    
    if((day>1 && day<30 && month==2 &&  a==4 && year%400==0) || (day>1 && day<29 && month==2 && a==4)){
       printf("valid date"); 
    }
    else if((day>1 && day<32 && month%2!=0 && a==4 && month!=2) || (month==8 && day>1 && day<32 && a==4 )){
        printf("valid date");
    }
     else if(day>1 && day<31 && month%2==0 && a==4 && month!=2){
        printf("valid date");
    }
    else{
        printf("invalid date");
    }
    

    return 0;
}