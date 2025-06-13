#include <stdio.h>
#include <math.h>

int main()
{
  int binary = 11011;
  int sum=0;
 
  while (binary>0){
      sum+=(binary%10);
       
      binary=(binary/10);
  }
  printf("%d",sum);
  return 0;
}
