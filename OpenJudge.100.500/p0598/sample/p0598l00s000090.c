
#include<stdio.h>                                                    

int main(void)
{
   int a,b,c;
   scanf("%d %d",&a,&b);

   if((b%a)==0){
            c=b+a;
            printf("%d\n",c);}

   else {
         c=b-a;
         printf("%d\n",c);}

   return 0;
}
