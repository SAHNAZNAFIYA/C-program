/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        max=max<arr[i]?arr[i]:max;
    }
        
        printf("%d",max);
   
    

    return 0;
}
