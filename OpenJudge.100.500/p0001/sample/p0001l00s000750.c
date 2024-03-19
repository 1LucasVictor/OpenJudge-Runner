#include<stdio.h>

int main(void)
{
	int a,b;
	char iiyokoiyo[256];
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",sprintf(iiyokoiyo,"%d",a+b));
	}
	return 0;
}