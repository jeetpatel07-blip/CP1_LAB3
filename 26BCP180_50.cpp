#include <stdio.h>
int main()
{
    int a,b,c=0 ;

    for (a=1;a<=100;a++)
    {
        if (a%3==0)
            {c=c+a;
            printf("%d\n",a);}

    }
printf("sum of all the integers for 1 and 100 = %d",c);
return 0;

}
