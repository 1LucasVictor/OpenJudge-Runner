#include<stdio.h>
#include<ctype.h>

char str[256];
int i;

main(){
	
	fgets(str,sizeof(str),stdin);
	for(i=0; i<sizeof(str); i++){
		if(islower(str[i])){
			str[i]=toupper(str[i]);
		}
		else if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}
	}
	
	printf("%s",str);
	
	return 0;
}
	