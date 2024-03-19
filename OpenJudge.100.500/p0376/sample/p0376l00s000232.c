#include <stdio.h>

int main(void)
{
	int numofinput;
	int input[100];
	
	scanf("%d", &numofinput);
	
	for(int i = 0; i < numofinput; i++){
		scanf("%d", &input[i]);
	}
	
	for(int rev = numofinput - 1; rev >= 0; rev--){
		printf("%d", input[rev]);
		if(rev == 0) break;
		printf(" ");
	}
	putchar('\n');
	
}
