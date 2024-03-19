#include<stdio.h>
int main(void){
	int i,j;
	int n;
	int num[10000];
	int max=-100000;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(max<num[j]-num[i])	max=num[j]-num[i];
		}
	}
	printf("%d\n",max);

	return 0;
}