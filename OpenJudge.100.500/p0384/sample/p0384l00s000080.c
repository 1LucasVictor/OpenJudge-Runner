#include<stdio.h>
#include<string.h>

main(){
	
	int i, j;
	char c[1200];
	
	for(i=0;i<1200;i++){
		scanf("%c",&c[i]);
		
		if(c[i]=='\n')break;
		
		else if(islower(c[i])!=0){
			c[i]=toupper(c[i]);
		}
		else if(isupper(c[i])!=0){
			c[i]=tolower(c[i]);
		}
		
		printf("%c",c[i]);
	}
	
	printf("\n");
		
	return 0;
}