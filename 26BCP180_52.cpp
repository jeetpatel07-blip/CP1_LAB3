#include <stdio.h>
int main ()

{
    int a,b,c=0;

    printf("enter the number of your choice: ");
    scanf("%d",&a);

    while (a!=0)
    {
        b=a%10;
        printf("%d\n",b);
        a = a/10;
        c++;

    }

printf("the number of digits is %d",c);
return 0 ;

}
