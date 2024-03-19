#include<stdio.h>
#include<math.h>


int main(void){
	int n,i,j;
	long data[200005],temp,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&data[i]);
	}
	max=data[1]-data[0];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			temp=data[j]-data[i];
			if(max<temp){max=temp;}
		}
	}
	printf("%ld\n",max);
	return 0;
}