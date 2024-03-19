#include <stdio.h>
#include <stdlib.h>

int main(){
	char key[5];
	fgets(key,4,stdin);
	int i,j;
	char tmp;
	char f = 1;
	for(i = 0; i < 2;i++){
		tmp = key[i];
		if(key[i+1] == tmp){
			f = 0;
		}
	}
	if(f){
		printf("Good\n");
	}else{
		printf("Bad\n");
	}
	return 0;
}