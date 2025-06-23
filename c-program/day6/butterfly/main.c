#include <stdio.h>

int main() {
    int n = 5;
    n = n * 2 + 1; 

    for (int i = 0; i < n; i++) {
        if (i < n / 2) 
        {
            for (int j = 1; j <= i + 1; j++) {
                printf("*");
            }
            for (int s = 1; s <= n - ((i * 2) + 2); s++) {
                printf(" ");
            }
            for (int k = 1; k <= i + 1; k++) {
                printf("*");
            }
        }
        else if (i == n / 2) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        }
        else {
            for (int j = 0; j < n - i; j++) {
                printf("*");
            }
            for (int s = 0; s < (i - (n / 2)) * 2 - 1; s++) {
                printf(" ");
            }
            for (int k = 0; k < n - i; k++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     int total = (n * 2) + 1;

//     for (int i = 0; i < total; i++) {
//         int stars = i <= n ? i : total - i - 1;
//         int spaces = (total - 1) - (2 * stars);

//         for (int j = 0; j <= stars; j++) {
//             printf("*");
//         }

//         for (int s = 0; s < spaces; s++) {
//             printf(" ");
//         }

//         for (int k = 0; k <= stars; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("enter");
//     scanf("%d",&n);
//     n=(n*2)+1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<(i+1) && j<(n-(i+1)) ;j++){
//             printf("*");
//         }
//          for(int s=0;s<(n-((i*2)+2));s++){
//             printf(" ");
//         }
//         for(int k=0; k<(i+1);k++){
            
//             printf("*");
//         }

//   printf("\n");
//     }
    

//     return 0;
// }