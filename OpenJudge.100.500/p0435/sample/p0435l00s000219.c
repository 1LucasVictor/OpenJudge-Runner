#include <stdio.h>
#include <math.h>

int main(void){
	int n,d,i;
    int co=0;
  	scanf("%d %d",&n,&d);
  	int x,y;
	for(i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      if(sqrt(x*x+(y*y)) <= (double)d)
        co++;
    }
  	printf("%d\n",co);
    return 0;
}
        

