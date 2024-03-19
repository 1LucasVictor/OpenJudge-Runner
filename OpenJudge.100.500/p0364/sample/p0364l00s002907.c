#include <stdio.h>

int x , y , r , w , h;

int main ()  {

	scanf ("%d %d %d %d %d" , &w , &h ,&x , &y , &r);
	
	if ((x+r)>w || (y+r)>h || (x-r)<0 || (y-r)<0) {
		printf ("No\n");
	} else {
		printf ("Yes\n");
	}
	return 0;
}


