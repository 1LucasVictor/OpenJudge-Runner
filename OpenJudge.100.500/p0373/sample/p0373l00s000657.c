#include <stdio.h>
void PrintRectangle (int H, int W){
	int i, j;
	if(i=1){
		for(j=1; j<=W; j++)
			putchar('#');
		putchar('\n');
	}
	for(i=2; i<=H-1; i++){
		if(j=1)
			putchar('#');
		for(j=2; j<=W-1; j++)
			putchar('.');
		if(j=W)
			putchar('#');
		putchar('\n');
	}
	if(i=H){
		for(j=1; j<=W; j++)
			putchar('#');
		putchar('\n');
	}
}
int main(void)
{
	int H,W;
	while (1){
		scanf("%d %d", &H, &W);
		if (H==0 && W==0)
			break;
		PrintRectangle(H,W);
	putchar('\n');
	}
	return 0;
}