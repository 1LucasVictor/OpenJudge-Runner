#include<stdio.h>
#include<stdlib.h>

int max1(int a,int b){
	if(a<b)
	return b;
	else 
	return a;
}
int max2(int a,int b,int c){
	int m;
	m=max1(max1(a,b),c);
	return m;
}
int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	max=max2(a,b,c);
	
	if(max==a)
	{
		if(b<c)
		printf("%d %d %d\n",b,c,a);
		else 
		printf("%d %d %d\n",c,b,a);
	}
	else if(max==b){
		if(a<c)
		printf("%d %d %d\n",a,c,b);
		else 
		printf("%d %d %d\n",c,a,b);
	}
	else if(max==c){
		if(a<b)
		printf("%d %d %d\n",a,b,c);
		else
		printf("%d %d %d\n",b,a,c);
	}
	

	return 0;
}
