#include <stdio.h>

void main()
{
    int d,i;
    int sum=0;
    printf("Enter number");
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}
