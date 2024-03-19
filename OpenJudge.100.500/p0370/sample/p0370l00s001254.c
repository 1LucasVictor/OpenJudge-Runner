#include <stdio.h>

int main(void)
{
	int a,b,c[10000],i,n;
	char op;
	i=1;
	scanf("%d %c %d",&a,&op,&b);
	while(op!='?'){
		if(op=='+'){
			c[i]=a+b;
		}
		if(op=='-'){
			c[i]=a-b;
		}
		if(op=='*'){
			c[i]=a*b;
		}
		if(op=='/'){
			c[i]=a/b;
		}
		i++;
		scanf("%d %c %d",&a,&op,&b);
	}
	n=i;
	for(i=1;i<=n-1;i++){
			printf("%d\n",c[i]);
	}
	return 0;
}
