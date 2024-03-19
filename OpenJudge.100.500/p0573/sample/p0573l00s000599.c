#include<stdio.h>
int main()
{
	char S[4];
	int a=0;
	int b=0;
	char c;
	char d;
	int OK;
	scanf("%s",S);
	c = S[0];
	for(int i=0;i<4;i++){if(S[i]!=c){d=S[i];OK=1;}}
	for(int i=0;i<4;i++){if(S[i]==c)a++;}
	if(OK){
		for(int i=0;i<4;i++){if(S[i]==d)b++;}
	}else
	{
		b=0;
	}
	printf("%s\n",(a==2 && b==2)? "Yes":"NO");
	return 0;
}