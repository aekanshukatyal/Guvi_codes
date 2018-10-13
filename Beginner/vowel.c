#include <stdio.h>

int vowel(char ch)
{
    ch=tolower(ch);
    if(isalpha(ch))
    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return 1;
        
    }
    else return 0;
    }
    return -1;
}    
int main()
{
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(vowel(ch)==1)
    {
        printf("Vowel");
    }
    else if(vowel(ch)==0)
    {
        printf("Consonant");
    }
    else
    {
        printf("Invalid");
    }
}
