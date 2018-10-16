#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,n;
    printf("Enter no");
    scanf("%d",&a);
    printf("Enter power");
    scanf("%d",&b);
    n=pow(a,b);
    printf("%d",n);
    return 0;
}
