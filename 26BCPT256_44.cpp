#include <stdio.h>
int main ()

{
    int a,b=0,d;
    float e;


    for(a=1 ; a<=10 ; a++)
    {
       printf("the %d number is: ",a);
       scanf("%d",&d);
       b = b+d ;


    }

    e = b/10 ;

printf("\n\n\nthe sum of all the numbers is : %d\n",b);
printf("the value of mean : %f ",e);
return 0 ;

}
