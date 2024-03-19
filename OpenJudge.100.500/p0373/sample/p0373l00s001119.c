#include <stdio.h>

int main(void)
{
	int h, w, H, W;
	while(1)
	{
		if(H ==0 && W == 0)
		{
			break;
		}else {
			scanf("%d %d", &H, &W);
			for(h = 0; h < H; h++)
			{
				for(w = 0; w < W; w++)
				{
					if(h == 0 || h == H -1)
					{
						printf("%c",'#');
					}else {
						if(w == 0 || w == W -1)
						{
							printf("%c", '#');
						}else {
							printf("%c", '.');
						}
					}
				}
				putchar('\n');
			}
		}
	putchar('\n');
	}
	return 0;
}