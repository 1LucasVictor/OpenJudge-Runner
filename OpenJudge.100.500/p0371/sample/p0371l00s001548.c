#include "stdio.h"

int main()
{
	int n,a[10000],min,max,i;
	double sum;
	scanf("%d", &n);
	if(n!=0){
		for(i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		min=a[0];max=a[0];sum=a[0];
		for(i=1;i<n;i++){
			if(min > a[i]){min = a[i];}
			if(max < a[i]){max = a[i];}
			sum += a[i];
		}
		printf("%d %d %.0lf\n", min, max, sum);
	}
	else {printf("     \n");}
	return 0;
}