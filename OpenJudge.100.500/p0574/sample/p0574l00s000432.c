#include<stdio.h>
int main()
{
	char s[5];
	int i,flg=0;
	scanf("%s",s);
	for(i=0;i<3;i++){
		if(s[i]==s[i+1]){
			flg=1;
			break;
		}
	}
	if(flg==1) printf("Bad\n");
	else printf("Good\n");
	return 0;
}