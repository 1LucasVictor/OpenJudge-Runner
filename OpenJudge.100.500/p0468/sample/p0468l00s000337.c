#include<stdio.h>
#define N 5
int main(void){
	char s[N];
  	scanf("%s",&s);
  	if (s[1] == 'B')	
      	printf("ARC\n");
  	else if(s[1] == 'R')
      	printf("ABC\n");
  
  	return 0;
}