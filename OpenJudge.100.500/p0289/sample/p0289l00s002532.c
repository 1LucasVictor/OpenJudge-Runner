#include <stdio.h>

int main()
{
   int x,y,temp,r;
   
   scanf("%d %d",&x,&y);
   
   if(x<y)
    {
	 temp = x;
	 x = y;
	 y = temp;
    }
   while(y>0)
    {
     r = x % y;
	 x = y;
	 y = r;
    }
	
	printf("%d\n",x);
	
	return(0);
}