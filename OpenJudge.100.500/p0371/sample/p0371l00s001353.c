#include <stdio.h>
int main(void){
	int n,b=0;
	int i,j;
	int a[10000],temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<=n;i++)b+=a[i];
	printf("%d %d %d\n",a[1],a[n],b);
	return 0;
}

