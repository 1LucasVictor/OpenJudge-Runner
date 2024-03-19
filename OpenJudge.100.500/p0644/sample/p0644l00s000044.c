
#include <stdio.h>

int main(void) 
{
	int counter=0;
	char a[10];
	scanf("%s",a);
	if (a[0]=='1') counter++;
	if (a[1]=='1') counter++;
	if (a[2]=='1') counter++;
	printf ("%d",counter);

	return 0;
	
	
}