#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,length;
	char Ans[8];
	while(scanf("%d %d",&a,&b)!=EOF){
		sprintf(Ans,"%d",a+b);
		length=strlen(Ans);
		printf("%d\n",length);
	}
	return 0;
}