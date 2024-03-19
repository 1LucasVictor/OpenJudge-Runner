#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,a,b,y;
	while((scanf("%d %d %d",&x,&a,&b))!=EOF)
	{
		y=a-b;
		if(y<0)y=-y;
		if(y>x)printf("dangerous\n");
		else{
			if(a>=b)printf("delicious\n");
			else printf("safe\n");
		} 		
	}
	return 0;
}