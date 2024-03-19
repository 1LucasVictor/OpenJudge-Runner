#include <stdio.h>

int main(void)
{
	int i,t;
	char num[1000];
	
	do{
		i=0;
		t=0;
		scanf("%s",num);
		if(num[0] != '0')
		{
			while(num[i]!='\0')
				t += (num[i++]-'0');
			printf("%d\n",t);
		}
		
	}while(num[0] != '0');
	
	
	return 0;
}