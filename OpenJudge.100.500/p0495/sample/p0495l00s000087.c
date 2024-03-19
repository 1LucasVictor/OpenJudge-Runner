#include<stdio.h>
int main()
{
	int cnt,cnt2,i;
	char a[4];
	scanf("%s",a);
	for(i=0;i<=3;i++){
		if(a[i]=='A') cnt++;
		if(a[i]=='B') cnt2++;
	}
	if(cnt==3||cnt2==3) printf("No\n");
	else printf("Yes\n");
	return 0;
}