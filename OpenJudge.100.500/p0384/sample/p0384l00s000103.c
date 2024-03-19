#include <stdio.h>

int main(void)
{
	int x;
	char a[1201];
	
	fgets(a, 1200, stdin);
	for(x = 0; a[x] != 0x00; x++){
		if(('A' <= a[x]) && (a[x] <= 'Z')){
			a[x] |= 0x20;
		}else if(('a' <= a[x]) && (a[x] <= 'z')){
			a[x] &= 0xdf;
		}else{
		}
	}
	printf("%s", a);
	
	return(0);
}

