#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int a1,b1,sum1,tenpower1,i1,digit1;
	
	while(scanf("%d %d", &a1, &b1)!=EOF) {
		
	sum1=a1+b1;i1=0;digit1=-1;

	
	do{
		
		tenpower1=pow(10,i1);
		digit1=digit1+1;
		i1++;
		
	}while(sum1/tenpower1>=1);
	
	printf("%d\n",digit1);
	

    
}
	

	
return(0);	

}
