#include <stdio.h>

int main(void)
{
	int a,b,c,i,k[100000],x=0;
	scanf("%d %d %d",&a,&b,&c);
	for(i=a;i<=b;i++){
		k[i]=c%i;
		if(k[i]==0){
			x++;
		}
	}
	printf("%d\n",x);
	return 0;
}