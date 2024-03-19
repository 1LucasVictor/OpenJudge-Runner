#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	int i;
	char s[10], t[11];
	scanf("%s", s);
	scanf("%s", t);
	
	lop(i, strlen(s)){
		if(s[i]!=t[i]){ printf("No"); return 0; }
	}
	
	printf("Yes");
	
return 0;
}