#include <stdio.h>

int main()
{
    int a,b,c;
    printf("a)\n");
    for(a=1,b=5;a<=5,b>=1;a++,b--)
        printf("%d %d\n",a,b);



     printf("\nb)\n");
    for(a=1,b=5;a<=3,b>=3;a++,b--)
        {printf("%d %d\n",a,b);
        printf("%d %d\n",a,b);}

return 0;
}
