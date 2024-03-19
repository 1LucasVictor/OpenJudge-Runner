#include<stdio.h>

int main(void)
{
	int n,r[200001],i,j,a;
	int max=-1000000000,max1=-1000000000;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&r[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			a=r[j]-r[i];
			if(max1<a){
				max1=a;
			}
		}
		if(max<max1){
			max=max1;
		}
	}
	
	printf("%d\n",max);
	return 0;
}