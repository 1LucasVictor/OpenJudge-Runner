#include<stdio.h>
int main(void){
	int x,i,y,z;
	int sum=0;
	do{
		scanf("%d",&x);
		if(x!=0&&x<=10000){
			i=(x/1000);
			y=(x-(1000*i))/100;
			z=(x-(1000*i)-(100*y))/10;
			sum=i+y+z+(x-(i*1000)-(y*100)-(z*10));
			printf("%d\n",sum);
			sum=0;
		}
		else{
			return 0;
		}
	}while(x<=10000);
	return 0;
}