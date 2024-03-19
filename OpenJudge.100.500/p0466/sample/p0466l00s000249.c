#include<stdio.h>

int main(){
	char s[11];
	char t[12];
	int lens = 0;
	int lent = 0;
	
	scanf("%s", s);
	scanf("%s", t);
	
	while(s[lens]){
		lens++;
	}
	
	while(t[lent]){
		lent++;
	}
	
	if(strncmp(s,t,lens) == 0 && lent - lens == 1){
		puts("Yes");
		return 0;
	}
	
	puts("No");
	
	return 0;
}