#include <stdio.h>
int main ()

{
    int a,b,c,d=0,e;

    printf("enter the number of your choice to find out its factors: ");
    scanf("%d",&a);
    printf("the factor till the half of the number : \n");


    for(b=1;b<=(a/2);b++)
    {
        if((a%b==0))
           {printf("%d\n",b);
            d = b+d ;}



    }

printf("\n\nthe sum of the number is : %d\n",d);

if (d==(a/2))
    printf("the number is a perfect number.");
else
    printf("the number is a not a perfect number.");
return 0 ;

}
