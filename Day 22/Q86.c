#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[200];
    int i, words = 0, inWord = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }
    }
    printf("Word count: %d\n", words);
    return 0;
}
