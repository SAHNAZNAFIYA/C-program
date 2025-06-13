#include <stdio.h>


int main()
{
  int binary = 11011;
  int val=1;
  int sum=0;
 
  while (binary>0){
      if (binary%10==1){
          sum+=val;
      }
      val*=2;
      binary=binary/10;
      
  }
  printf("%d",sum);
  return 0;
}
