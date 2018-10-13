#include <stdio.h>

void largest(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        printf("%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d",b);
    }
    else printf("%d",c);
}    
void main()
{
    int d=0;int e=0;int f=0;
    printf("Enter three no");
    scanf("%d%d%d",&d,&e,&f);
    largest(d,e,f);
}
