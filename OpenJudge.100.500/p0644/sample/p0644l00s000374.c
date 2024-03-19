#include<stdio.h>
int main(void){
	char s[4];
	scanf("%s", s);
	int n=0;
	for(int i=0; i<4; i++){
		if(s[i]=='1')n++;
	}
	printf("%d\n", n);
}