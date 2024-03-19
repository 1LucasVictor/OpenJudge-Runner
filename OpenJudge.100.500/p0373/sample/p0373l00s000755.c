#include <stdio.h>
#include <math.h>
 main(void)
 {
 int h,w;
 while(1)
{
 scanf("%d %d",&h,&w);
 if((h|w)==0)break;
 for(int i=0;
i<h;
i++)
{
 for(int j=0;
j<w;
j++)
{
 printf("%c",j==0||j==w-1||i==0||i==h-1?'#':'.');
 }
 printf("\n");
 }
 printf("\n");
 }
 } 
