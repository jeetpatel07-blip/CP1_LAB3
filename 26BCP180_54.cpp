#include <stdio.h>
int main ()

{
    int a,b,c;

    printf("enter the number of your choice: ");
    scanf("%d",&a);
    c=a;

    while (a!=0)
    {
        b=a%10;
        printf("%d",b);
        a = a/10;

    }

printf(" is the reversed number");
return 0 ;

}
