#include <stdio.h>
int main ()

{
    int a,b=0,d,c=d;
    printf("------LARGEST AMONG 100 NUMBERS------\n\n\n\n");

    for (a=1;a<=5;a++)
    {
        printf("%d no enter : ",a);
        scanf("%d",&d);


        if (b<d)
           {b=d;}
        if (c>d)
            {c=d;}
}


printf("%d is the largest number\n",b);
printf("%d is the smallest number",c);

return 0 ;

}
