#include <stdio.h>
int main(void){
	int a[90],min=1000000,max=-1000000,sum=0,i,kazu;
	scanf("%d",&kazu);
	
	for(i=0;i<kazu;i++){
		scanf("%d",&a[i]);
		if(a[i]<min){
		min=a[i];
		}
		if(a[i]>max){
		max=a[i];
		}
		sum=sum+a[i];
	}
	printf("%d %d %d\n",min,max,sum);
  return 0;
}