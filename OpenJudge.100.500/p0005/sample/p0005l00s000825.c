#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,len,j;
	char s[20];
	scanf("%s",s);
    len=strlen(s);
	for(i=len-1;i>=0;i--){
	    printf("%c",s[i]);
	}
	    printf("\n");
}
