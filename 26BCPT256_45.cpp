#include <stdio.h>
int main ()

{
    int a,b=0 , c ,d,e;
    printf("the number of terms you want to take a mean for :");
    scanf("%d",&c);

    for(a=1 ; a<=c ; a++)
    {
       printf("the %d number is: ",a);
       scanf("%d",&d);
       b = b+d ;


    }

    e = b/c ;

printf("\n\n\nthe sum of all the numbers is : %d\n",b);
printf("the value of mean : %d ",e);
return 0 ;

}
