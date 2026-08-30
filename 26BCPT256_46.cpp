#include <stdio.h>
int main ()

{
    int a,b=0,d;
    printf("------LARGEST AMONG 100 NUMBERS------\n\n\n\n")

    for (a=1;a<=100;a++)
    {
        printf("%d no enter : ",a);
        scanf("%d",&d);

        if (b<d)
           {b=d;}
}


printf("%d is the largest number",b);
return 0 ;

}
