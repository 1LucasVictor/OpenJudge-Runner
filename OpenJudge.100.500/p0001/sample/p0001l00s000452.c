#include<stdio.h>
int main (void){
	int a[100];
	int b[100];
	int num[100]={};
	int ans[100]={};
	
	int i=0;
	int j;

	while(scanf("%d %d",&a[i],&b[i])!=EOF){
		i++;
	}

	for(j=0;j<i;j++){
		num[j]=a[j]+b[j];
	}
	
	for(j=0;j<i;j++){
		while(num[j]!=0){
			num[j]=num[j]/10;
			ans[j]++;
		}
	}
	
	for(j=0;j<i;j++){
		printf("%d\n",ans[j]);
	}
		
	return 0;
}