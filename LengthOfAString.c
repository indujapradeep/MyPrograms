#include <stdio.h>

int main() 
{
    char s[100];
    printf("Enter a String:");
    scanf("%s",&s);
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("Length of the string: %d", i);
    
}

