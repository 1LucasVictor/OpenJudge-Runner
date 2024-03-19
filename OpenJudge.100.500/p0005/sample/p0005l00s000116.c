#include <stdio.h>

int main(void) {
	int i,j;
	char mozi[21];
	scanf("%s",mozi);
	for(i=0;mozi[i]!=0;i++);
	for(j=i-1;j>=0;j--)printf("%c",mozi[j]);
	printf("\n");
	return 0;
}