#include <stdio.h>
int main(void){
	//atcorder A-HappyBirthday
	
	int A,B;
	
	scanf("%d",&A);
	scanf("%d",&B);
	
	if(A<=8 && B<=8){
		printf("Yay!\n");
	}else{
		printf(":(\n");
	}
	
	return 0;
}
