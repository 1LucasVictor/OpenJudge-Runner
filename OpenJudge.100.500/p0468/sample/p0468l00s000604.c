#include<stdio.h>
#include<stdio.h>
int main(){
	char s[5]={'\0'};
	int t=0;
	scanf("%s",s);
	if(s[1]=='B'){
		t=1;
	}
	if(t==1) printf("ARC");
	else printf("ABC");
	return 0;
}