#include <stdio.h>
int main ()

{
    int a,b,c=0,d=0,e=0 ;
    printf("------TO DETERMINE THE NUMBER OF BOYS AND GIRLS IN THE CLASSROOM------\n\n\n");
    printf("if the student is a boy then enter : 1\n");
    printf("if the student is a girl then enter : 2\n\n");
    printf("=============================================================================\n");

   for(a=1;a<=5;a++)
   {
       printf("enter your sex code (roll no :%d): ",a);
       scanf("%d",&b);

       if(b!=1 && b!=2)
       {printf("enter a valid input\n");
        printf("enter your sex code (roll no :%d):",a);
        scanf("%d",&b);
            if (b==1)
                c++;
            if (b==2)
                d++;


        }
       else if (b==1)
        {c++;}

       else if (b==2)
        {d++;}


       }


printf("no of boys in the classroom: %d\n",c);
printf("no of girls in the classroom : %d\n",d);

return 0 ;

}
