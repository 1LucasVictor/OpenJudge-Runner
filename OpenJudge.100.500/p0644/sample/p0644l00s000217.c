#include <stdio.h>

int	main(void)
{
	char	s[256];
	int		c = 0;

	scanf("%s", &s);
	for( int f=0; f<3; ++f)
    {
		if( s[f]=='\0' ) return -1;
		if( s[f]=='1' ) ++c;
	}
  
	printf("%d\n", c);
	return 0;
}