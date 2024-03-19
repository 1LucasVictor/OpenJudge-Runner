#include<stdio.h>
int main(void){

	int a,b,d,sum;

	while(scanf("%d %d",&a,&b)!=EOF){
		sum=a+b;
		d=0;
		while(sum!=0){
			sum/=10;
			d++;
		}
		printf("%d\n",d);
	}
	return 0;
}