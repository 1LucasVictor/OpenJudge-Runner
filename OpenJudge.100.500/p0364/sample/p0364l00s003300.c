#include <stdio.h>

int main(void)
{
	int W ,H ,x ,y ,r;
	scanf("%d%d%d%d%d" ,&W ,&H ,&x ,&y ,&r);
	if(x + r > W || y - r < 0 || y + r > H || y - r < 0){printf("No\n");
	}else if(x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H){printf("Yes\n");
	}
	return 0;
}
