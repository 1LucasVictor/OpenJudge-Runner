#include<stdio.h>

int main(){
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	int flag=1;
	if(a=='A'&&b=='A'&&c=='A')flag=0;
	if(a=='B'&&b=='B'&&c=='B')flag=0;
	if(flag)printf("Yes");
	else printf("No");
	return 0;
} 