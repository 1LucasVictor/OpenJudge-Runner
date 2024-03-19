#include <stdio.h>
#include <limits.h>
int main(){
	int n,i,j;
	int max=INT_MIN;
	int num[200000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((num[j]-num[i])>max) max=num[j]-num[i];
		}
	}
	printf("%d\n",max);
}