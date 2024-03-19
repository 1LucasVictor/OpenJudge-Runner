#include <stdio.h>

int main(void) {
	char str;
	int i=0;
	
	
	for(i=0;i<1200;i++){
		scanf("%c",&str);
		
		if(str >= 'A' && str <= 'Z'){
			str = str + 32;
		}
		else if (str >= 'a' && str <= 'z'){
			str = str - 32;
		}
		
		if(str == '\n' || str == '\0'){

			break;

		}
			
			printf("%c",str);
	}
			printf("\n");

	return 0;
}