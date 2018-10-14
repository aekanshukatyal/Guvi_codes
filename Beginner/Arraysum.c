#include <stdio.h>

void main()
{
    int n,k,i;
    int sum=0;
   scanf("%d%d",&n,&k);
   int arr[n];
   printf("Enter elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<k;i++)
   {
       sum+=arr[i];
   }
   printf("%d",sum);
}
