#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],t[10];
	int i,flg,len;
	scanf("%s %s",s,t);
	len=strlen(s);
	flg=0;
	for(i=0;i<len;i++){
		if(s[i]!=t[i]){
			flg=1;
			break;
		}
	}
	if(flg==0)  printf("Yes\n");
	else printf("No\n");
	return 0;
}
