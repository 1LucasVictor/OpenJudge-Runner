#include<stdio.h>
#include<string.h>

int main(void)
{
	int i,c_0=0,c_1=0,len;
	char s[100001];
	scanf("%s",s);
	len=strlen(s);
	
	for(i=0;i<len;i++){
		if(s[i]=='0')
			c_0++;
		if(s[i]=='1')
			c_1++;
	}
	if(c_0>=c_1)
		printf("%d",c_1*2);
	else
		printf("%d",c_0*2);
	return 0;
}
	