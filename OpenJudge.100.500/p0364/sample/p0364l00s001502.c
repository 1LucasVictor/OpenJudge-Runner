#include <stdio.h>
#include <stdlib.h>

void Constraints(int W,int H,int x,int y,int r) //制約関数の宣言
{
  if(-100<=x&&x<=100&&-100<=y&&y<=100&&0<W&&W<=100&&0<H&&H<=100&&0<r&&r<=100){}
  else
  {
    printf("条件を満たす入力をしてください。\n");
    exit(0); //条件を満たさない場合プログラム終了
  }
}

void Check(int W,int H,int x,int y,int r,char **a)  //Sort関数の宣言
{
  if(x+r>W)
  {
    *a="No";
  }
  else if(y+r>H)
  {
    *a="No";
  }
  else if(r>x)
  {
    *a="No";
  }
  else if(r>y)
  {
    *a="No";
  }
  else
  {
    *a="Yes";
  }
}

int main(void)
{
  int W,H,x,y,r;
  char *answer="Hellow World";
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  Check(W,H,x,y,r,&answer);
  printf("%s\n",answer);
	return 0;
}

