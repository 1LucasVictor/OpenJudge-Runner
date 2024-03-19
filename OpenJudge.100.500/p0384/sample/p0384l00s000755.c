#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
	char c[1200];
	int i;
	fgets(c,1200,stdin);
	
	
	for(i = 0;i < strlen(c);i++){
	if(c[i] >= 'a'&&c[i] <= 'z')
		c[i] = toupper(c[i]);
		
	else if(c[i] >='A'&&c[i] <='Z')
		c[i] = tolower(c[i]);
		
	}
	fputs(c,stdout);
	
	return 0;
}
