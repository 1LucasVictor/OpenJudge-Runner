#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
	int n;
	int i;
	int j;
	int sum[200000];

	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d",&j);
		sum[j-1]++;
	}
	for(i=0;i<n;i++){
		printf("%d\n",sum[i]);
	}
	return 0;
}
