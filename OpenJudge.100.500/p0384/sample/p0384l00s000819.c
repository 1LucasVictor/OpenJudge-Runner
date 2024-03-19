#include<stdio.h>

int main(void)
{
	char str;
	
	while(1){
		scanf("%c", &str);
		if(str == '\n'){
			break;
		}
		else if(str >= 'a' && str <= 'z'){
			str -= 0x20;
		}
		else if(str >= 'A' && str <= 'Z'){
			str += 0x20;
		}
		printf("%c", str);
	}
	printf("\n");
	
	return (0);
}