#include <stdio.h>
int main ()

{
    int a,b,c,d=0,e;

    printf("enter the number of your choice: ");

    scanf("%d",&a);
    e=a;


    for(;a!=0;a=a/10)
    {
        b=a%10;
        c=b*b*b;
        d=c+d;
    }

    if(d==e)
        printf("the value is armstrong");
    else
        printf("the value is not armstrong");

return 0 ;

}
