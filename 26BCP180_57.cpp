#include <stdio.h>
int main ()

{
    int a,b,c,d=0,e;

    printf("enter the number of your choice to find out its factors: ");
    scanf("%d",&a);


    for(b=1;b<=a;b++)
    {
        if((a%b==0)&&(b<a))
            printf("%d,",b);



    }
printf("%d are the factors of this number.",a);

return 0 ;

}
