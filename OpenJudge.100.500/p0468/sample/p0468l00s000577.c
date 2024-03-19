#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,len,flg;
	char s[3];
	scanf("%s",s);
	len=strlen(s);
	flg=0;
	for(i=1;i<=len;i++){
		if(s[1]=='B'){
			flg=1;
		}
		else{
			flg=0;
		}
	}
	if(flg==1){
		printf("ARC\n");
	}
	else{
		printf("ABC\n");
	}
	return 0;
}