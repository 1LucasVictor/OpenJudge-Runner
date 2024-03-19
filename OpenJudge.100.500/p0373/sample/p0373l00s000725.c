#include<stdio.h>
 
 int main()
{

 int h,w,i,j;
 
 for(;;){
         scanf("%d%d",&h,&w);
         if(h+w==0) break;
         for(i=0;i<h;i++){
                          for(j=0;j<w;j++)
                          if(i*j==0 || i+1==h || j+1==w)
                                  printf("#");
                          else
                                  printf(".");
                          printf("\n");
                          }

           printf("\n");
          }
     return 0;
}

