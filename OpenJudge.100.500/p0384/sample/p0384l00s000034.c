#include<stdio.h>
#include<ctype.h>
int main(){
	
	char m;
	while(1){
		scanf("%c",&m);
		
		if(islower(m)){
			printf("%c",toupper(m));
		}else {
			printf("%c",tolower(m));
		}
		
		if(m=='\n'){
		break;
		}
	}
	
	
	
return 0;
}