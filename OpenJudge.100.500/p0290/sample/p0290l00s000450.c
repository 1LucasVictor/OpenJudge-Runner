#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int prime_number(int x){
	int i;
	int n;
	double rest;
	for(i=0;i<3;i++){
			n = rand() % x;
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

