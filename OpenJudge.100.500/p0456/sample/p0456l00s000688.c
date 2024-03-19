#include<stdio.h>
#include<string.h>
int main(void)
{
	int cnt,len,i;
	char s[2000000],t[200000];
	scanf("%s",s);
	scanf("%s",t);
	len=0; cnt=0;
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]!=t[i]){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}