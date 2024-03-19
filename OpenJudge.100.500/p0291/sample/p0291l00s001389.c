#include<stdio.h>

int main(void){
	int n;
	long long int r[20005];
	int i,j,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	max=r[1]-r[0];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(max<r[j]-r[i]){max=r[j]-r[i];}
		}
	}
printf("%d\n",max);
	return 0;
}