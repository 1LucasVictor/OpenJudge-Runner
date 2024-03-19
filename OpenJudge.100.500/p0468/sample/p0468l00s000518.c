#include<stdio.h>
#define N 5
int main(void){
	char s[N];
  	scanf("%s",&s);
  	
  	switch(s[1]){
    	case 'B':
        	printf("ARC\n");
        	break;
     	case 'R':
        	printf("ABC\n");
        	break;
    }
  	
  	return 0;
}