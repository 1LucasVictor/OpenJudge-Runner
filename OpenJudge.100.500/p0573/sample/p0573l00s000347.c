#include<stdio.h>
int main()
{
	char s[5];
	int i,flg;
	scanf("%s",s);
	flg=0;
	for(i=0;i<4;i++){
		if(s[0]==s[1]&&s[2]==s[3]||s[0]==s[3]&&s[2]==s[1]){
			flg=1;
		}
	}
	if(flg==1) printf("Yes\n");
	else printf("No\n");
	return 0;
}
