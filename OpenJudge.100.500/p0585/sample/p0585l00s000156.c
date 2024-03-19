#include <stdio.h>
 
int main(void){
	int A,B,T,i=1,num=0;
  
  	scanf("%d %d %d",&A,&B,&T);
  	
  	while(i*A < T){
    	num += B;
      	i++;
    }
  	printf("%d\n",num);
  	return 0;
}