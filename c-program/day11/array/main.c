
#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
   
    

    return 0;
}
