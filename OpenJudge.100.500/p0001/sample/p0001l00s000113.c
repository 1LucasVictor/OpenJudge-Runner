#include <stdio.h>
#include <string.h>
int main()
{
	int a,b;
	char n[10];
	while(scanf("%d %d",&a,&b)!=EOF){
		sprintf(n,"%d",a+b);
		printf("%d\n",strlen(n));
	}
	return 0;
}