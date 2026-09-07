#include <stdio.h>

int main()
{
    int a,b,c;



    printf("enter the term you require Fibonacci  series for :");
    scanf("%d",&a);

    int d[a];

    printf("write the first term of the series :");
    scanf("%d",&d[0]);

    d[1]=d[0];
    printf("the Fibonacci series is:\n");
    printf("%d\n%d\n",d[0],d[1]);

    for(b=1;b<=a-2;b=b+1)
    {
    d[b+1]=d[b]+d[b-1];

     printf("%d\n",d[b+1]);

    }




return 0 ;






}
