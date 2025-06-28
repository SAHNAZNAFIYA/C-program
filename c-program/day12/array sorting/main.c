/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[5]={5,4,3,2,1};
   int temp,n=5;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
       
   }
   for(int i=0;i<n;i++){
       printf("%d",arr[i]);
   }

    return 0;
}