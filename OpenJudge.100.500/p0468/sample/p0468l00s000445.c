#include<stdio.h>
int main(void){
	char c[3];
	scanf("%s",c);
	if(c[1]=='B'){
		c[1]='R';
	}else{
		c[1]='B';
	}
	printf("%s",c);
}