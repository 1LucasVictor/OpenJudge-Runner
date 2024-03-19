#include<stdio.h>
#include<ctype.h>

int main(){
int i;
char moji;		
	
while(1){
	scanf("%c",&moji);
	
	if(moji=='\n') break;
	
	if(islower(moji)!=0){
		printf("%c",toupper(moji));
	}
	else if(isupper(moji)!=0){
		printf("%c",tolower(moji));
	}
	else{printf("%c",moji);}
}
printf("\n");


	


return 0;

}