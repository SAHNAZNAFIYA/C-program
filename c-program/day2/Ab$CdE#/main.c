#include <stdio.h>

int main() {
    char str[100]= "Ab$CdE#";
    int i = 0;

    

    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 1 + 32);
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] + 1 - 32);
        }
        else {
            printf("%c", str[i]);
        }
        i++;
    }

  

    return 0;
}

