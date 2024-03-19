#include <stdio.h>
#define Max 100001
int main(void)
{
	int i,j,k,n;
	int data[Max]={0};
	long long temp=0,max=-10000000;
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		for(i=0;i<n;i++){
			temp=0;
			for(j=i;j<n;j++){
				temp+=data[j];
				if(max<temp) max=temp;
			}
		}
		printf("%lld\n",max);
		max=-10000000;
	}
	return 0;
}