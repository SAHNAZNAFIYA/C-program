#include <stdio.h>
#include <string.h>

int main()
{
   char str[] ="Hello";
   char str1 [100];
   int k=0;
   for(int i=strlen(str)-1;i>=0;i--){
       str1[k]=str[i];
       k++;}
       str1[k]='\0';
       printf("%s",str1);
     return 0;
    
}