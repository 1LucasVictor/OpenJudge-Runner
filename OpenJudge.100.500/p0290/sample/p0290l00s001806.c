#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,a,s=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a==1)continue;
		for(j=2;j<=(int)sqrt(a);j++)if(a%j==0)break;
		if(j==(int)sqrt(a)+1)s++;
	}
	printf("%d\n",s);
	return 0;
}
