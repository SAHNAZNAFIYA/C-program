 #include <stdio.h>
#include <string.h>

int main() {
    char str[] = "saravanan";
    int arr[26] = {0};  // Frequency of 'a' to 'z'
    int printed[26] = {0}; // To avoid printing duplicates

    // Count frequency
    for (int i = 0; i < strlen(str); i++) {
        arr[str[i] - 'a']++;
    }

    // Print in order of first appearance
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        int index = ch - 'a';
        if (!printed[index]) {
            printf("%c:%d\n", ch, arr[index]);
            printed[index] = 1;
        }
    }

    return 0;
}
