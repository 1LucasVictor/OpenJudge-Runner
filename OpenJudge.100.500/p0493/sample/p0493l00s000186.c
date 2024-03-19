#include<stdio.h>

int main(void)
{
  //所持金を入力
  int x;
  scanf("%d",&x);

  //um(嬉しさメーター)を初期化
  int um = 0;

  //500円硬貨で得られるum
  um += x/500*1000;

  //残りの所持金
  x %= 500;

  //5円硬貨で得られるum
  um += x/5*5;

  //umを出力,return 0で終了
  printf("%d\n",um);

  return 0;
}