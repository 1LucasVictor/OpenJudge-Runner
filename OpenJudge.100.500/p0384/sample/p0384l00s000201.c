#include<stdio.h>
int main(){
	char moji;
	int i;
	for(i=0;i<1200;i++){
		scanf("%c",&moji);
		if(moji=='\n') break;
		if(moji>='A' && moji<='Z'){
			moji=moji+32;
			printf("%c",moji);
		}else if(moji>='a' && moji<='z'){
			moji=moji-32;
			printf("%c",moji);
		}else{
			printf("%c",moji);
		}
	}
	printf("\n");
}
			
			
	
