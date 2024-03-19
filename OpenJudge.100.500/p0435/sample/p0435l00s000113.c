#include <stdio.h>
#include<math.h>

int main(void)
{
	int N,D,count=0,i;
	double  x,y;
	scanf("%d %d",&N,&D);
  	for(i=1;i<=N;i++){
  		scanf("%lf %lf",&x,&y);
    		if(sqrt(x*x+y*y)<=D)
      			count++;
	 }
  	printf("%d\n",count);
  	return 0;
}