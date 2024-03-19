#include<stdio.h>

int CountDivisers(int a, int b, int c)
{
	int i;
	int count = 0;
	
	for(i = a; i<=b ; i++){
		if(c % i == 0){
		count++;
		}		
	}
	
	return count;
}

int main(void)
{
	int a;
	int b;
	int c;
	int count;
	
	count = 0;

	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",CountDivisers(a,b,c));
	return 0;
}