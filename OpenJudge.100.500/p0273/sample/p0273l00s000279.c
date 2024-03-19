#include <stdio.h>
int main(void)
{
	int n,i,f[45];
	
	scanf("%d",&n);
	
	f[0]=1; f[1]=1;
		for (i=2;i<=n;i++){
			f[i]=f[i-2]+f[i-1];
		}
	printf("%d\n",f[n]);
	
	return 0;
}