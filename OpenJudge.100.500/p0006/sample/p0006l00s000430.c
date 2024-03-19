#include <stdio.h>

int main()
{
	int n,i;
	int yen = 100000;
	scanf("%d",&n);
	
	printf("%d\n",debt(n));
/*
	for(i=0;i<n;i++){
	yen=yen+yen*0.05;
	yen=yen+999;
	yen=yen/1000;
	yen=yen*1000;
	}
printf("%d\n",yen);
*/
	return 0;
}

int debt(int n)
{
	int i,k;
	int j=100000;
	float r = 0.05;
	for(i=0;i<n;i++){
		j += j*r;
		j += 999;
		j = j/1000;
		j = j*1000;
		
	}
	
	
	return j;
	}