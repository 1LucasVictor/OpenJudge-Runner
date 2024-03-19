#include <stdio.h>

int main(){
	char sa;
	char sb;
	char sc;
	scanf("%c", &sa);
	scanf("%c", &sb);
	scanf("%c", &sc);
	if(sa == sb){
		printf("No\n");
	}
	if(sb == sc){
		printf("No");
	}
	else{
		printf("Yes");
	}
}