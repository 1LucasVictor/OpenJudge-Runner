#include <stdio.h>

int main( void )
{
	char str;
	int sum = 0;
	
	while( 1 ){
		scanf("%c", &str);
		
		if(str == '\n'){
			if(sum == 0){
				break;
			}
			else{
				printf("%d\n", sum);
				sum = 0;
			}
		}
		else{
			sum += str - '0';
		}
	}
	
	return 0;
}