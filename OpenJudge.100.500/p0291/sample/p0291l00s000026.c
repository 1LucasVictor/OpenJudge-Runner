#include <stdio.h>
#include <stdlib.h>
int main(){
	int b,n,i,j,min=2147483647,max,ans=-214783648;
	int *r;
	scanf("%d",&n);
	r = malloc(sizeof(int) * (n));
	scanf("%d",r);
	max = min = *r;
	for(i=1; i<n; i++){
		scanf("%d",(r+i));
		max = *(r+i);
		if(min != max)b = max - min;
		if(min > *(r+i))min = *(r+i);
		if(ans < b)ans = b;
	}
	
	printf("%d\n",ans);
	free(r);
	return 0;
}
		