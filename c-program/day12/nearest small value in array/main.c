#include <stdio.h>

int main()
{
  int arr[5]={5,2,3,4,1};
  int n=5;
  for(int i=0;i<n;i++){
      int count=0;
      
      
      for(int j=i+1;j<n;j++){
          int k=1;
          int val=-1;
          
          if(arr[j]==(arr[i]-1) ){
               
              val=arr[j];
             
              break;
               
               
          }
      
          else if(arr[j]==(arr[i]-(k+1))){
              val=arr[j];
             
              break;
              }
              k++;
             
           
          }
         
       printf("%d",val);     
  }
  
    return 0;
}

//matrix addition

// #include<stdio.h>
// int main()
// {
//     int r1,r2,c1,c2;

// printf("enter r1,c1,r2,c2" );
// scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
// if(r1!=r2 || c1!=c2){
//     printf("enter the correct row and column");
// }
// int mat1[r1][c1],mat2[r1][r2],res[r1][r2];
// printf("enter mat1");
// for(int i=0;i<r1;i++){
//     for(int j=0;j<c1;j++){
//         scanf("%d",&mat1[i][j]);
//     }
// }
// printf("enter mat2");
// for(int i=0;i<r2;i++){
//     for(int j=0;j<c2;j++){
//         scanf("%d",&mat2[i][j]);
//     }
// }
// printf("\n");
// for(int i=0;i<r2;i++){
//     for(int j=0;j<c2;j++){ 
//         res[i][j]=mat1[i][j]+mat2[i][j];
//     }
// }
// for(int i=0;i<r2;i++){
//     for(int j=0;j<c2;j++){
//         printf("%d\t",res[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }
