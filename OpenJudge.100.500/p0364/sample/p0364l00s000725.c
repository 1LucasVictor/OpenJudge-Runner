#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intput(int *W, int *H, int *x, int *y, int *r);
int judge(int *W, int *H, int *x, int *y, int *r);
int main(void)
{
	int W = 0;
	int H = 0; 
	int x = 0;
	int y = 0; 
	int r = 0;

	intput(&W, &H, &x, &y, &r);
	judge(&W, &H, &x, &y, &r);

	return 0;
}
int intput(int *W, int *H, int *x, int *y, int *r)
{
	//printf("以下の数値を指定してください\n");
	//printf("長方形の横の長さ：");
	scanf("%d", W);
	//printf("長方形の縦の長さ：");
	scanf("%d", H);
	//printf("円のx軸の座標：");
	scanf("%d", x);
	//printf("円のy軸の座標：");
	scanf("%d", y);
	//printf("円の半径の長さ：");
	scanf("%d", r);

	return 0;
}
int judge(int *W, int *H, int *x, int *y, int *r)
{
	int iYoko = ( *x - *r );
	int iTate = ( *y - *r );
	int iCyokkei = ( *x + *r );
	int iSuicyoku = ( *y + *r );

	if (( iYoko < 0 )
	 || ( *W < iCyokkei )
	 || ( iTate < 0 )
	 || ( *H < iSuicyoku ))
	{
		printf("No\n");
	}
	else
		printf("Yes\n");
	return 0;
}

