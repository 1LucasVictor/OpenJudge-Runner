#include<stdio.h>
int main()
{int a,b,x,y,n,i;
   scanf("%d%d%d%d",&a,&b,&x,&y);
    if(x>b||a>y)
      {
      	printf("0\n");
      	return 0;}
      else
	   if(a<=x)
	     {if(b<=y)
	       printf("%d\n",b-x);
	      else
	       printf("%d\n",y-x);
	     }
	        if(a>x)
			{if(b<=y)
			  printf("%d\n",b-a);
			  else
			  printf("%d\n",y-a);
				}    
		return 0;
 } 
 