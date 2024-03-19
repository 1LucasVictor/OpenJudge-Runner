#include<stdio.h>
int main()
{
	int W, H, x, y, r;
	scanf("%d %d %d %d %d" ,&W, &H, &x, &y, &r);
	if(0>=x-r || W<=x+r ||                    //x座標
           0>=y-r || H<=x+r)                      //y座標
	printf("No\n");
	else printf("Yes\n");

 return 0;
}

