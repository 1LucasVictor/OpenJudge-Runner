#include<stdio.h>

int main()
{
   int h,w,i,j;


for(;;)
{
       scanf("%d %d",&h,&w);
       if(h==0 && w==0)
        break;
   for(i=0;i<h;i++)
   {
       if(i==0||i==h-1)
       {
           for(j=0;j<w;j++)
       {
           printf("#");
       }
       }
      else

      {
          printf("#");
       for(j=0;j<w-2;j++)
       {
           printf(".");
       }
       printf("#");
      }
       printf("\n");
   }

   printf("\n");
}


}

