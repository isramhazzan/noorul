#include <stdio.h>
int main()
{
    char a1[100], a2[100], i, j;
    printf("Enter first string: ");
    scanf("%s", a1);
    printf("Enter second string: ");
    scanf("%s", a2);
    for(i = 0; a1[i] != '\0'; ++i);
    for(j = 0; a2[j] != '\0'; ++j, ++i)
    {
        a1[i] = a2[j];
    }
    a1[i] = '\0';
    printf("After concatenation: %s", a1);
    return 0;
}
