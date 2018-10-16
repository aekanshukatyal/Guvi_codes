#include <stdio.h>

    void main()
    {
    int a,b,i,j;
    int counter=1;
    printf("Enter no");
    scanf("%d",&a);
    printf("Enter second no");
    scanf("%d",&b);
    if(a>=0&&b>=0)
    {
    for(i=a+1;i<b;i++)
    {
        if(i==1){continue;}
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                counter=0;
                break;
            }
            
        }
        if(counter==1)
        {
            printf("%d ",i);
        }
        counter=1;
    }
    }
    else{printf("Invalid");}
    }
