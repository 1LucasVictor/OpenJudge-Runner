#include<stdio.h>
#include <string.h>
int main(void)
{
	int n, i, num0, num1;
	char s[100001];
	scanf("%s",s);
	num0=0,num1=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='0')num0++;
		if(s[i]=='1')num1++;
	}
	if(num1>=num0){
		printf("%d",(strlen(s)-num1)*2);
	}else{
		printf("%d",(strlen(s)-num0)*2);
	}
	return 0;
}