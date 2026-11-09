#include <stdio.h>
#include <string.h>
int main(void) {
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\\n")] = '\\0';
    j = (int)strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) { flag = 0; break; }
    }
    if (flag) printf("The string is a Palindrome.");
    else printf("The string is not a Palindrome.");
    return 0;
}
