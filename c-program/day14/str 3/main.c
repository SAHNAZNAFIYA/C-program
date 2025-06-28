#include <stdio.h>
#include <string.h>

int main()
{
   char str[]="357913+-*/%";
   int val=str[0] -'0';
   printf("%d",val);
   for(int i=1;i<=strlen(str)/2;i++){
       switch(str[(strlen(str)/2)+i]){
           case '+':{
           val+=str[i]-'0';
           break;
       }
       case '-':{
       val-=str[i]-'0';
       break;}
       case '*':{
         val*=str[i] - '0';
         break;
       }
       case '/':{
           val/=str[i] - '0';
           break;}
       case '%':{
           val%=str[i] - '0';
           break;
       }
       
       
       }
   }
    return 0;
}