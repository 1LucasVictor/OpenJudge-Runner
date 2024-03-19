#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int a[10000];
	int s,max=0,min=1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(max<a[i])max=a[i];
		else if(min>a[i])min=a[i];
		
		s=s+a[i];
	}
	printf("%d %d %d\n",min,max,s);
	return 0;
}