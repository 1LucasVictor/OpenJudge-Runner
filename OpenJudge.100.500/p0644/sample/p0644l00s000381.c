#include<stdio.h>
int main()
{
	char S[3];
	int ans=0,i;
	scanf("%s",S);
	for(i=0;i<3;i++){if(S[i]=='1'){ans++;}}
	printf("%d",ans);
	return 0;
}