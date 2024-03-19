#include<stdio.h>
int main()
{
	int X,A,B;
	while(scanf("%d%d%d",&X,&A,&B)!=EOF)
	{
		if(X<1||A>10E9||B>10E9) break;
		if((B-(X-A))<=0) printf("delicious\n");
    	if((B-(X-A))>0&&(B-(X-A))<=5) printf("safe\n");
    	if((B-(X-A))>5) printf("dangerous\n");
	}	 
}
	