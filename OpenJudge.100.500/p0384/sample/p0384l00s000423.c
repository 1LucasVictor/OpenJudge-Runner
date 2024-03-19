#include <stdio.h>
#include <ctype.h>
int main(void){
	int i,len;
	char str[1200];

	fgets(str,sizeof(str),stdin);
	len = strlen(str)-1;
	for(i=0;i<len;i++){
		if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}
		else{
			str[i]=toupper(str[i]);
		}
	}
	printf(str);
	return 0;
}