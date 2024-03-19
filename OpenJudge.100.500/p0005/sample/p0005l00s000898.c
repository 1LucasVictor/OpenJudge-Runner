#include <stdio.h>

int main(){
	char hoge[21];
	char *itr=hoge;

	scanf("%s",hoge);
	
	while('\0'!=*itr){
		itr++;
	}

	while(hoge!=itr){
		itr--;
		printf("%c",*itr);
	}
	printf("\n");
	return 0;
}