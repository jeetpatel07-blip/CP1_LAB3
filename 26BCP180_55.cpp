#include <stdio.h>
int main ()

{
    int a,b,c,d,e;

    printf("enter the number of your choice: ");

    scanf("%d",&a);
    c=a;


    for(;a!=0;a=a/10)
    {

        b=a%10;
        d=b*10+a;
    }

printf("\n\n");
    if(d==c)
        printf("the value is palindrome\n\n");
    else
        printf("the value is not a palindrome\n\n");
return 0 ;

}
