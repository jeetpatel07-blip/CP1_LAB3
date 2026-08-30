#include <stdio.h>
int main ()

{
    int a,b,c=0,d=0,e=0 ;
    printf("------TO COUNT POSITIVE NEGATIVE AND ZEROS IN 200 NUMBERS------\n\n\n");

   for(a=1;a<=200;a++)
   {
       printf("enter the %d value : ",a);
       scanf("%d",&b);

       if (b>0)
        {c++;}

       else if (b<0)
        {d++;}

       else
       {e++;}
   }




printf("\n\n\n");
printf("no of positive  numbers : %d\n",c);
printf("no of negative numbers : %d\n",d);
printf("no of zeros numbers : %d",e);
return 0 ;

}
