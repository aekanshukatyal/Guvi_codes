#include <stdio.h>
#include<math.h>

void prime(int n)
    {
        int b;
        if(n==1)
        {
            printf("no");
            return;
        }
        for(b=2;b<=n/2;b++)
        {
            if(n%b==0)
            {
                printf("no");
                return;
            }
        }
        printf("yes");
       }
    
    void main()
    {
    int a;
    printf("Enter no");
    scanf("%d",&a);
    prime(a);
    }
