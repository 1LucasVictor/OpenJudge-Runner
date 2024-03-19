#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	int k, a, b, i;
	scanf("%d", &k);
	scanf("%d %d", &a, &b);
	
	
	for(i=1; i<=b*k; i++){
		if(i*k>=a && i*k<=b){ printf("OK"); return 0; }
		else if(i*k>b) break;
	}
	
	printf("NG");
	 
	return 0;
}