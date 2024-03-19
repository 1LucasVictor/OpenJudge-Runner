#include<stdio.h>

int main()
{
	char S[110000];
	scanf("%s",S);
	int a = 0;
	int b = 0;
	int i;
	for(i=0;S[i]!='\0';i++);
	int L = i;
	for(i=0;i<=L-1;i++){
		if(S[i] == '1') a++;
		else if(S[i] == '0') b++;
	};
	if(a >= b)	printf("%d",2*b);
	else printf("%d",2*a);
}