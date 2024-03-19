#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char dat[1200];
	
	scanf("%[^\n]",&dat);
	
	for(i=0 ; i<strlen(dat) ; i++){
		if(dat[i]>=65 && dat[i]<=90){
			dat[i]+=32;
		}
		else if(dat[i]>=97 && dat[i]<=122){
			dat[i]-=32;
		}
		printf("%c",dat[i]);
	}
	printf("\n");
	return 0;
}
