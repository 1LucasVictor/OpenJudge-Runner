#include <stdio.h>

int main(void) {
	int a,b,i,j;

	while(scanf("%d %d",&a,&b)!=EOF)
	{
			i=1;
			j=0;
		while((a+b)/i!=0){
		i=i*10;
		j++;
		}
		printf("%d\n",j);
	}
	return 0;
}