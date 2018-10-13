#include <stdio.h>

void leap(int a)
{
    if(a%400==0 || (a%4==0 && a%100!=0))
    {
        printf("yes");
    }
    else printf("no");
}    
void main()
{
    int d=0;
    printf("Enter year");
    scanf("%d",&d);
    leap(d);
}
