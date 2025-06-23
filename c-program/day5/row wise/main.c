/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n=6,sum=0,first,second;
    
    for(i=1;i<=n;i++){
        if(i%2!=0 ){
            int first=i;
            printf("%d\t",i);
            
           
            
            
        }
        else{
            printf("%d\t",i);
             int second=i;
            sum=second+1;
            printf("%d\n",sum);
            if(sum==i){
            i=sum-1;
        }
            
            
        }
        
        // printf("%d",i);
        // printf("%d\n",i+1);
    }
    
  

    return 0;
}
