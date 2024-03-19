#include <stdio.h>
#include <math.h>

int main(void){
	long int n,d,i;
        long int co=0;
  	scanf("%ld %ld",&n,&d);
 	long int x,y;
    for(i=0;i<n;i++){
      scanf("%ld %ld",&x,&y);
      if(sqrt(x*x+(y*y)) <= (double)d)
        co++;
    }
  	printf("%ld\n",co);
    return 0;
}
        

