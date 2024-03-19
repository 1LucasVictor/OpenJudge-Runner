#include <stdio.h>

char s[10];

int main(){

	scanf("%s",s);

	int ans=0;

	if(s[0]=='1'){ans++;}
	if(s[1]=='1'){ans++;}
	if(s[2]=='1'){ans++;}

	printf("%d\n",ans);

return 0;
}