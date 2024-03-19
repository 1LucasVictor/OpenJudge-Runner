//要は5が二つ7が一つあればよい
#include <stdio.h>
//はじめ
int main(void)
{
  int num[4],i,count5=0,count7=0;
  char str[16];
//数値を読み取る
  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d%d%d",&num[0],&num[1],&num[2]);
//3回ループ
  for(i=0;i<3;i++)
  {
//数値を一つずつ調べる
    switch (num[i])
    {
//5か7ならそれぞれカウント
      case 5:
        count5++;
        break;
      case 7:
        count7++;
        break;
      default :
        break;
    }
//ループここまで
  }
//カウンターをチェック,結果を表示
  if((count5==2)&&(count7==1))
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}
//おわり