#include <stdio.h>

int vowel(char ch)
{
    ch=tolower(ch);
    if(isalpha(ch))
    {
        return 1;
    }
    else return -1;
}    
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(vowel(ch)==1)
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
}
