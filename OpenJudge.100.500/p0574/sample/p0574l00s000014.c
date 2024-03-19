#include <stdio.h>
#include <stdlib.h>
int 
main(){
	int i;
	char s[4];
	
	for(i=0;i<4;i++)scanf("%c",&s[i]);
	
	for(i=0;i<3;i++){
		if(s[i]==s[i+1]){
			printf("Bad\n");
			return 0;
		}
	}
	printf("Good\n");

 return 0;
}