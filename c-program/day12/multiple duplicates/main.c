#include <stdio.h>

int main()
{
    printf("enter the size of the array");
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the value in %d index ",i);
   scanf("%d",&arr[i]);
    }
     int arr1[n]={};
  
   for(int i=0;i<n;i++){
       int count=0;
       if(arr1[i]){
           continue;//skips
       }
       for(int j=i+1;j<n;j++){
           if(arr[j]==arr[i]){
               count++;
               arr1[j]=1;
               
           }
       }
       // unique
    //   if(count==0)
    //   {
    //       printf("%d\n",arr[i]);
    //   }
       if(count)
       {
           printf("%d\n",arr[i]);
       }
   }

    return 0;
}