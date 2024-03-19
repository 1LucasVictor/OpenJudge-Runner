#include <stdio.h>
#include<math.h>
 
int main(void)
{
	int N,D,x,y,count=0,i;
	scanf("%d %d",&N,&D);
  for(i=1;i<=N;i++){
  	scanf("%d %d",&x,&y);
    if(sqrt(x*x+y*y)<=D)
      count++;
  	}
  printf("%d\n",count);
  return 0;
}