#include <stdio.h>
int main(void)
{
	int S=0, h=0, m=0, s=0;
	
	scanf("%d",&S);
	
	h = S/3600;
	m = (S-h*3600)/60;
	s = S-(h*3600+m*60);
	
	
	printf("%d:%d:%d\n",h ,m ,s);
	
	return 0;
}