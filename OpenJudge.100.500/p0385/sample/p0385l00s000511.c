#include <stdio.h>
int main(void)
{
	char x[1002];
	int i;
	char *p;
	
	while(1){
		i=0;
		fgets(x,1002,stdin);
		if(x[0]=='0')break;
		p=x;
		while(*p!='\n'){
			i = i + (*p-'0');
			p++;
		}
		printf("%d\n",i);
	}
		
	return 0;
}
