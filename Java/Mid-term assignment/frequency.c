#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i, freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("'%c' given %d times\n", i, freq[i]);
        }
    }

    return 0;
}

