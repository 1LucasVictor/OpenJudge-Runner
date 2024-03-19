#include<stdio.h>
int main(void)
{
	char ch;
	
	while(1)
	{
		scanf("%c",&ch);
		
		if(ch>=65 && ch<=90)
		{
			ch+=32;
		}
		else if(ch>=97 && ch<=122)
		{
			ch-=32;
		}
		
		printf("%c",ch);
		
				if(ch == '\n')
		{
			break;
		}
	}
	
	return 0;
}
