#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int a1,b1,a2,a3,b2,b3,sum1,sum2,sum3,tenpower1,tenpower2,tenpower3,i1,i2,i3,digit1,digit2,digit3;
	
	scanf("%d %d",&a1,&b1);
	scanf("%d %d",&a2,&b2);
	scanf("%d %d",&a3,&b3);
	
	sum1=a1+b1;i1=0;digit1=-1;
	sum2=a2+b2;i2=0;digit2=-1;
	sum3=a3+b3;i3=0;digit3=-1;
	
	do{
		
		tenpower1=pow(10,i1);
		digit1=digit1+1;
		i1++;
		
	}while(sum1/tenpower1>=1);
	
	do{
		
		tenpower2=pow(10,i2);
		digit2=digit2+1;
		i2++;
		
	}while(sum2/tenpower2>=1);
	
		do{
		
		tenpower3=pow(10,i3);
		digit3=digit3+1;
		i3++;
		
	}while(sum3/tenpower3>=1);
	
	printf("%d\n",digit1);
	printf("%d\n",digit2);
	printf("%d\n",digit3);
}
