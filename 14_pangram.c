#include <stdio.h>
int main(void) {
    char str[500];
    int alphabet[26] = {0}, i, index, flag = 1;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            index = str[i] - 'A';
            alphabet[index] = 1;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
            alphabet[index] = 1;
        }
    }
    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) { flag = 0; break; }
    }
    if (flag) printf("The sentence is a Pangram.");
    else printf("The sentence is not a Pangram.");
    return 0;
}
