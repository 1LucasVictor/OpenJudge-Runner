#include <stdio.h>


int main(){
	int a, b;
	scanf("%i %i", &a, &b);
	if(a+b>16)
		printf(":(\n");
	else{
		if((a-b==1) || (a-b==-1) || (a-b==0))
			printf("Yay!\n");
	}
}
