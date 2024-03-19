#include <stdio.h>


int main(void)
{	
	long n, i, a[10000], min=0, max, sum=0;

	scanf("%ld", &n );
	
	for(i=0; i<n; i++){
		scanf(" %ld", &a[i]);
		if(i==0){ min = a[i]; max = a[i];  }
		else{
			if(min > a[i]) min = a[i];
			if(max < a[i]) max = a[i];

		}
		sum = sum + a[i];
	}
	
	printf("%ld %ld %ld\n", min, max, sum);
	
	//getchar();
	//getchar();
	return 0;
}