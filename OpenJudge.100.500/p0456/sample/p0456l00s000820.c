#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100001],t[100001];
	int i,len,cnt;
	scanf("%s",s);
	scanf("%s",t);
	len=strlen(s);
	cnt=0;
	for(i=0;i<len;i++){
		if(s[i]!=t[i]){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
