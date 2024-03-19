#include <stdio.h>

int main( void )
{
	char str[1001] = { 0 };
	int i = 0;
	int sum = 0;
	
	while( 1 ){
		scanf("%c", &str[i]);
		
		if(str[i] == '\n'){
			if(i == 1 && str[0] == '0'){
				break;
			}
			else{
				printf("%d\n", sum);
				sum = 0;
				i = 0;
			}
		}
		else{
			sum += str[i] - 0x30;
			i++;
		}
	}
	
	return 0;
}