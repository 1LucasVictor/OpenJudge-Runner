#include<stdio.h>

int main(){
	int n;
	int max=0;
	int sum=0;
	int i,j;
	int a[5000];
	while(scanf("%d",&n)!=EOF){

		if(n==0)break;



		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				sum+=a[j];
				if(max<sum)max=sum;
			}
			sum=0;
		}
		printf("%d\n",max);
		max=0;
	}
	return 0;
}