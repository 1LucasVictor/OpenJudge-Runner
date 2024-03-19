#include<stdio.h>

int main(void)
{
	int n,i,min,max,sum;
	int a[10000];
	scanf("%d",&n);
	if(0<n && n<=10000){
		for(i=0;i<n;i++){
			if(-1000000 <= a[i] && a[i]<=1000000){
				scanf("%d",&a[i]);
			}
			else a[i]=0;
		}
		min=max=sum=a[0];
		for(i=1;i<n;i++){
			sum+=a[i];
			if(min>a[i]) min=a[i];
			if(max<a[i]) max=a[i];
		}
		printf("%d %d %d\n",min,max,sum);
	}
	return 0;
}