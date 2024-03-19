#include<stdio.h>

int main(){
char ch[1200];
int diff='a'-'A',i;
for(i=0;i<1200;i++){
	scanf("%c",&ch[i]);
	if(ch[i]>=65&&ch[i]<=90)ch[i]+=diff;
	else if(ch[i]>=97&&ch[i]<=122)ch[i]-=diff;
	else if(ch[i]=='\n')break;
	printf("%c",ch[i]);
}
printf("\n");

return 0;
}