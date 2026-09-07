#include <stdio.h>

int main()
{
    int a,b,c;
    printf("a)\n");
    for(a=1;a<=2;a++)
    {
        for(b=1;b<=3;b++)
        printf("%d %d\n",a,b);
    }


    printf("\nb)\n");
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=a;b++)
        printf("%d %d\n",a,b);
    }

    printf("\nc)\n");
    for(a=1;a<=2;a++)
    {
        for(b=1;b<=2;b++)
        {
            for(c=1;c<=2;c++)
               {printf("%d %d %d\n",a,b,c);}
        }
    }

    printf("\nd)\n");
    for(a=5;a>=3;a--)
    {
        for(b=1;b<=2;b++)
        printf("%d %d\n",a,b);
    }
return 0 ;






}
