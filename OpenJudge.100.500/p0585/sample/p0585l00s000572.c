#include <stdio.h>
 
int main(void){
	int A,B,T,i=1,num=0;
  
  	scanf("%d %d %d",&A,&B,&T);
  	
  	while((double)(i*A) <= (double)T+0.5){
    	num += B;
      	i++;
    }
  	printf("%d\n",num);
  	return 0;
}