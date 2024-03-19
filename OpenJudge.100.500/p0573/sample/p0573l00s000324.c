#include <stdio.h>

int main ()
{
	char a[4];
	scanf ("%s",&a);
	if ( (a[0] == a[1] || a[0] == a[2] || a[0] == a[3]) || ( a[1] == a[2] 
	|| a[1] == a[3] ) || ( a[2] == a[3] ) && (a[0] == a[1] || a[0] == a[2] 
	|| a[0] == a[3]) || ( a[1] == a[2] || a[1] == a[3] ) || ( a[2] == a[3] )){
		printf ("Yes\n");
	}
	else {
		printf ("No\n");
	}
	return 0;
}