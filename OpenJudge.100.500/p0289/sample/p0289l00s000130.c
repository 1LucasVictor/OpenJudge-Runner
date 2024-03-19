#include <stdio.h>
#include <math.h>
/*#include <stdlib.h>*/
int main(int argc, char *argv[])
{		
   int i,j,temp,flag=-1,max;
   scanf("%d%d",&i,&j);
   temp=(i<j?i:j);
   for(max=1;max<temp;max++)
   if(i%max==0&&j%max==0)
   flag=max;
   if(flag==-1)
   flag=1;
   printf("%d\n",flag);
	return 0;
}