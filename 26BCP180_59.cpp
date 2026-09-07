#include <stdio.h>
int main ()

{
    int a,b,c=0;

    printf("enter the number of your choice to find out if its a prime number: ");
    scanf("%d",&a);



    for(b=2;b<=a;b++)
       {
            if(a%b==0)
            {
                break ;
            }

       }

if(b==a)
    printf("the number is a prime number ");
else
    printf("the number is not a  prime number");




return 0;

}
