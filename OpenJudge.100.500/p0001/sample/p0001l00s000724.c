#include <stdio.h>

int spi(int,int);
int main(void)
{
	int i=0,z=0,a,b;
	int kai[200];
	
	while (scanf("%d%d", &a, &b) != EOF){
		kai[i] = spi(a, b);
		i++;
	}
	
	for (z=0; z<i; z++){
		printf("%d\n", kai[z]);
	}
	
	return 0;
}

int spi(int q, int q2)
{
	int count=0;
	double sum = (double)q+q2;
	double kkk=10.0;
	
	while (1){
		if (sum/kkk < 1){
			count++;
			break;
		}
		else {
			kkk *= 10;
			count++;
		}
	}
	
	return count;
}