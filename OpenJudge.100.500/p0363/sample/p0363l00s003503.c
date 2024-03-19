#include<stdio.h>//３つの整数を読み込み、それらを値が小さい順に並べて出力するプログラム

void temp(int *,int *);
int main(void){

	int a,b,c;
	
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
		temp(&a,&b);
	if(b>c)
		temp(&b,&c);
	if(a>b)
		temp(&a,&b);

	printf("%d %d %d\n",a,b,c);
	
	return 0;
}

void temp(int *a,int *b){
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}