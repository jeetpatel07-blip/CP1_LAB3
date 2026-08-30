#include <stdio.h>
int main()

{
    int a,b, c = 0 ;
    printf("write the value of n : ");
    scanf("%d",&b);


    for(a=1;a<=(2*b);a++)
    {
        if (a%2==0)
        c = c + a ;



    }
printf("the sum of first odd n natural number : %d",c);

return 0 ;

}
