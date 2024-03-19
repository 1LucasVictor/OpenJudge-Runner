#include <stdio.h>
#include <string.h>

int main(void) {
	char str[20],def;
	int i,j,z;

	scanf("%s", str);
	z = strlen(str);
	j = z;

	for (i = 0; i<z / 2; i++,j--){
		def = str[i];
		str[i] = str[j-1];
		str[j-1] = def;
	}

	printf("%s\n", str);

	return 0;
}