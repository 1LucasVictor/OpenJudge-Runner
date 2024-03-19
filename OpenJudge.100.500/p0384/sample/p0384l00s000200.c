#include<stdio.h>
int main(){
	int a,b,c,d;
	char A;
	while(A!='\n'){
		scanf("%c",&A);
		if(islower(A))
			A=toupper(A);
			else if(isupper(A))
		A=tolower(A);
			
			printf("%c",A);
	}
	return 0;
}