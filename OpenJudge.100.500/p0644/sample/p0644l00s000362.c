#include <stdio.h>

int main(void)
{
	char a[4];
	int b=0,i;
	scanf("%s",a);
	for(i=0;i<3;i++){
		if(a[i]=='1'){
			b++;
		}
	}
	printf("%d\n",b);
	return 0;
}