#include <stdio.h>

int main(){
	int firstinput;
	int nextinput;
	scanf("%d %d",&firstinput,&nextinput);
	
	if(firstinput % 2  == 0|| nextinput % 2 == 0){
		printf("Even\n");
	}else{
		printf("Odd\n");
	}
	return 0;
}