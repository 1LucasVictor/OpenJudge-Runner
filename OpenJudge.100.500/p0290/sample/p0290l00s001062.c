#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int prime_number(int x){
	int i;
	int n;
	double rest;
	
	if(x>2&&x%2==0)
		return 0;

	for(i=0;i<9;i++){
		if(x>10){
			n = rand() % 9;
		}else{
			n = rand() % x;
		}
//		printf("n = %d\n",n);
		rest = fmod( pow(n,x) ,x ) ;
//		printf("rest = %lf\n",rest);
		if( (int)rest != n)
			return 0;
	}
	return 1;
}

int main()
{
	int in,num,i;
	int count=0;

	scanf("%d",&num);

	for(i=0;i<num;i++){
		scanf("%d",&in);
		if(prime_number(in))
			count++;  
//		printf("%d\n",count);
	}
	printf("%d\n",count);

	return 0;
}
