#include<stdio.h>
int main()
{
	int A,B,C,D,Z;
	scanf("%d %d %d %d",&A,&B,&C,&D);
    if(A<C)
    {
    	if(B>D)
    	{
    		Z=D-C;
    		if(Z>0)
    			printf("%d\n",Z);
    		else
				printf("0\n");
    	}
    	else
   		{
   			Z=B-C;
   			if(Z>0)
   				printf("%d\n",Z);
			else
				printf("0\n");
   		}
   }
   else
   {
      	if(D>B)
    	{
    		Z=D-C;
    		if(Z>0)
   				printf("%d\n",Z);
			else
				printf("0\n");
   		}
    	else
	    {
	    	Z=D-A;
	    	if(Z>0)
	    		printf("%d\n",Z);
	    	else
	   			printf("0\n");
	    }
   }
	return 0;
}