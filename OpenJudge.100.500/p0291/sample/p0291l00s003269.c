#include <stdio.h>
#include <limits.h>
int main(){
	int n,i,j;
	int max=INT_MIN;
	int min=INT_MAX;
	int min_index=0;
	int num[200000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(num[i]<min) min=num[i],min_index=i;
	}
	for(i=min_index;i<n;i++){
		if(num[i]>max) max=num[i],min_index=i;
	}
	printf("%d\n",max-min);
}