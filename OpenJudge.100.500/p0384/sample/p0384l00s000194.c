#include <stdio.h>

int main()
{
	char ch;

for(;;)
{
    scanf("%c", &ch);
    
    
    if('a' <= ch && ch <= 'z')
	{
		printf("%c",ch-32);

	}
	
	if('A' <= ch && ch <= 'Z')
	{
		printf("%c",ch+32);
	}

	
	if ('A'>ch||ch>'z')		printf("%c",ch);
	
	

    if ( ch == '\n' )
	{
		break;
	} 
}
	

return 0;
}

