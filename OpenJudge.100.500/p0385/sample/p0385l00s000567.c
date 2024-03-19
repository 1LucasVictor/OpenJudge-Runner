#include <stdio.h>

int main(void)
{
	int i,s;
	while(1){
		char x[1001];
		s=0;
		scanf("%s",x);
		if(x[0]=='0'&&x[1]=='\0')break;
		for(i=0;x[i]!='\0';i++)s+=x[i]-'0';
		printf("%d\n",s);
	}
	return 0;
}
