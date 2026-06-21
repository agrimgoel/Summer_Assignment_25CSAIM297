#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int i, j, len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}
