#include <stdio.h>

int main(void)
{
	int s[3];
	int i,a=0;
	for(i=0;i<3;i++){
		scanf("%1d",&s[i]);
		if(s[i]==1) a++;
	}
	printf("%d\n",a);
	return 0;
}

