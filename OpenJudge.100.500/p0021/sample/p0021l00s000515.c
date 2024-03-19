#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,n,sum,max;
	int *data;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		data=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		sum=max=0;
		for(i=0;i<n;i++){
			sum=0;
			for(j=i;j<n;j++){
				sum+=data[j];
				if(max<sum) max=sum;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}