#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, len, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Palindrome string\n");
    else
        printf("Not a palindrome string\n");
    return 0;
}
