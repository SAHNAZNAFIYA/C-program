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
    scanf("%d",&n);
 
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
    }
    return 0;
}
