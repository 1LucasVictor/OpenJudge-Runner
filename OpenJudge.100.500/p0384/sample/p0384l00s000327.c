#include <stdio.h>
int main(void)
{
	char moji[1202];
	int i;
	
	fgets(moji,1202,stdin);
	
	for(i=0;moji[i];i++){
		if(('a'<=moji[i]&&'z'>=moji[i])||('A'<=moji[i]&&'Z'>=moji[i]))
		moji[i] ^= 0x20;
		putchar(moji[i]);
	}
	
	
	
	return 0;
}
