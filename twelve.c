#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("uppercase");
    else
        printf("lowercase");
    return 0;
}