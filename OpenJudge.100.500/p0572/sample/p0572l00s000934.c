#include<stdio.h>

int main(void){
	int L,R;
	scanf("%d%d",&L,&R);
	
  	int counter = 2000;
  
  	for(int i=L; i<=R; i++){
    	for(int j=i+1; j<=R; j++){
        	int num = (i * j)%2019;
          	if(num < counter){
            	counter = num;
            };
        };
    };
  	printf("%d", counter);
  
	return 0;
}