#include <stdio.h>

#define LENGTH 1200

main()
{
	int i;
	char c, s[LENGTH];
	for(i = 0; i < LENGTH; i++){
	    scanf("%c", &c);
		if ( c == '\n'){
			s[i] = '\0';
			break;
		}else{
			s[i] = c;
		}
	}
	
	for(i = 0; i < LENGTH; i++){
		if (s[i] == '\0'){
			printf("\n");
			break;
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			printf("%c", s[i]+0x20);
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			printf("%c", s[i]-0x20);
		}else{
			printf("%c", s[i]);		
		}
	}
		
	return 0;
}