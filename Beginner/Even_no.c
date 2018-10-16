#include <stdio.h>

    void main()
    {
    int a,b,i;
    printf("Enter no");
    scanf("%d",&a);
    printf("Enter second no");
    scanf("%d",&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    }  
