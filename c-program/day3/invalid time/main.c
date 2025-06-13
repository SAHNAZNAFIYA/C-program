#include <stdio.h>

int main()
{
    int hour,minute,second;
    
    printf("ENTER THE hour,minute,second");
    scanf("%d %d %d",&hour,&minute,&second);
    
    if(hour>1 && hour<25 && minute>0 && minute<61 && second>0 && second<61){
       printf("valid time");
       
    }
    else{
        printf("invalid time");
    }
    return 0;
}