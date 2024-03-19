#include<stdio.h>
int main()
{
	char S[4];
	int a=0;
	int b=0;
	char c;
	char d;
	scanf("%s",S);
	c = S[0];
	for(int i=0;i<4;i++){if(S[i]!=c)d=S[i];}
	for(int i=0;i<4;i++){if(S[i]==c)a++;}
	for(int i=0;i<4;i++){if(S[i]==d)b++;}
	printf("%s\n",(a==2 && b==2)? "Yes":"NO");
	return 0;
}