#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[21];
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	//printf("s=%s\n",s);
	for(i=n-1;i>=0;i--){
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}

