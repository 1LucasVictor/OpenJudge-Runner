#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	char s[3];
	scanf("%s", s);
	
	if(s[1]=='B'){ printf("ARC"); }
	else { printf("ABC"); }
	 
	return 0;
}