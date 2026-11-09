#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[500];
    int read = 0, write = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[read] != '\0')
    {
        if (str[read] != ' ' || write == 0 || str[write - 1] != ' ')
        {
            str[write] = str[read];
            write++;
        }
        read++;
    }

    str[write] = '\0';
    printf("String after removing extra spaces: %s", str);

    return 0;
}
