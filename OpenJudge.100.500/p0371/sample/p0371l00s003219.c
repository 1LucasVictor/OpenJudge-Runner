#include<stdio.h>
int main(void)
{
	int n,i;
	long long sum=0;
	int min=1000001,max=-1000001;

	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		int t;
		scanf("%d",&t);
		if(t<min){
			min=t;
		}if(t>max){
			max=t;
		}
		sum+=t;
	}
	printf("%d %d %d\n",min,max,sum);

	return 0;
}