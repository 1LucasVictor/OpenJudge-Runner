#include <stdio.h>
int main(){
	char a[4];
	scanf("%s", a);
	if((a[0]==a[1]) && (a[0]==a[2]))
		printf("No");
	else {
		printf("Yes");
	}
	printf("\n");

	return 0;
}