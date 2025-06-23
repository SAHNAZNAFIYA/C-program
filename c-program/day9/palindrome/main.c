/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int val=121,rev=0,temp;
    temp=val;
    while(val>0){
       rev=rev*10+val%10;
       val/=10;
    }
    if(rev==temp){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    
    
   

    return 0;
}
