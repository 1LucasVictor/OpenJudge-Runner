#include<stdio.h>

int main(){
	int input;
  	int mod;
  	scanf("%d", &input);
  	mod = input % 2;
  	if(mod == 0){
    	printf("%d", input / 2);
    } else {
    	printf("%d", (input / 2)+1 );
    }
}