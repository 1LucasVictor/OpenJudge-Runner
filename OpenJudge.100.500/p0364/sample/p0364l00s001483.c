#include <stdio.h>

int main(void)
{
  int W, H, x, y, r; //W,H=長方形の右上の頂点座標 x,y=円の中心座標 r=円の半径

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r); //各情報の取得

 if((x+y < W && y+r < H) && (x-r >= 0  && y-r >= 0)) //長方形の左辺と下辺がはみ出してない
    printf("Yes\n"); //円が長方形の中に入っている
  else
    printf("No\n"); //円が長方形の中に入っていない

  return 0;

}
