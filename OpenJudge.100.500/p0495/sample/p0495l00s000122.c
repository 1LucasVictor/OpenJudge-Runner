#include <stdio.h>

int main()
{
	int i,flag = 0;
	char s[3];
	
	for(i = 0;i < 3;i++)
		scanf("%c",&s[i]);
		
	if((s[0] == 'A') && (s[1] == 'B' ||s[2] == 'B') ||(s[0] == 'B') && (s[1] == 'A' ||s[2] == 'A'))
		flag = 1;
		
	printf("%s\n",flag == 1?"Yes":"No");
	
	return 0;
}
