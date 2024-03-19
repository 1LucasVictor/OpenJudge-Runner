#include <stdio.h>

int main(void){
	int ans=0;
	char s[4];
	scanf("%s",&s);
	if(s[0]=='1') ans++;
	if(s[1]=='1') ans++;
	if(s[2]=='1') ans++;
	printf("%d",ans);
	
	return 0;
}