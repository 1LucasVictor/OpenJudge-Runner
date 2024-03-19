#include<stdio.h>

int main(void)
{
	int i;
	char ch;
	char str[120];
	for(i=0;i<120;i++){
		scanf("%c",&ch);
		if(65<=ch && ch<=90) ch+=32;
		else if(97<=ch && ch<=122) ch-=32;
		str[i]=ch;
		if(ch=='\n'){
			str[i+1]='\0';
			break;
		}
	}
	printf("%s",str);
	return 0;	
}	