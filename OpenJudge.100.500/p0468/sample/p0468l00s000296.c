#include <stdio.h>
#include <stdlib.h>


int main(){
	char buf[10]; 
	if(scanf("%s", buf)==EOF){return 0;}
	if(buf[1]=='R'){buf[1]='B';}
	else{buf[1]='R';}
	printf("%s\n", buf);
	return 0;
}