#include<stdio.h>

int main(){
	char kata[5]="";
	scanf("%s", &kata);
	if(kata[1]=='B') printf("ARC\n");
	else if(kata[1]='R') printf("ABC\n");
	return 0;
}