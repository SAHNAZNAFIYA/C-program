/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
  int binary = 11011;
  int bit;
  int sum=0;
  int n = 0;
  while (binary>0){
      bit = (binary%10);
      sum+= bit * pow(2,n);
      binary=(binary/10);
      n++;
      
  }
  printf("%d",sum);
  return 0;
}
