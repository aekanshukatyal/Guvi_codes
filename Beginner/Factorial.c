#include <stdio.h>

    void main()
    {
    int a,i,b=1;
    printf("Enter no");
    scanf("%d",&a);
    if(a>=0)
    {
        for(i=a;i>0;i--)
            {
              b=b*i;  
            }
        printf("%d",b);    
    }
    else{printf("Invalid");}
    }  
