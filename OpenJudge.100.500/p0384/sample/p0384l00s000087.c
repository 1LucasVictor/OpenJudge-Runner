#include <stdio.h>

int main (void){
char c;

while(1){
	scanf("%c",&c);
	
	if (c >= 65 && c <= 90){ /*??§????????¢???????????????????????????*/
		c = c + 32; /*ASCII???????????? ??§????????¢?????????????????? + 32 = ?°?????????¢??????????????????*/
		printf("%c",c);
	}
	
	else if (c >= 97 && c <= 122){ /*?°?????????¢???????????????????????????*/
		c = c - 32; /*ASCII???????????? ?°?????????¢?????????????????? - 32 = ??§????????¢??????????????????*/
		printf("%c",c);
}
	
	else{printf("%c",c);}
	
	
	
	if(c=='\n'){
	break;
	}
	
	
	

}



return 0;
}