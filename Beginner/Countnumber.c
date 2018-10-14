#include <stdio.h>

void main()
{
    int n;
    int count=0;
   scanf("%d",&n);
   while(n>0)
   {
       n=n/10;
       count+=1;
   }
   printf("%d",count);
}
