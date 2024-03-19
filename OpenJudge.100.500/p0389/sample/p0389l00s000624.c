#include<stdio.h>
#include<string.h>

#define MAX 201

int main(){
  int m,h,i,j,k;
  char x[MAX],y[MAX],z[MAX];

  int cnt;
  int cnt_max;
  char ans[10][MAX];

  cnt = 0;
  while(1)
  { 
    if (cnt >= 10) break;

    scanf("%s",x);    // シャッフルされる文字列

    if (x[0]=='-') break;

    scanf("%d",&m);   // シャッフル回数

    // シャッフル回数分ループ
    for(k=0;k<m;k++)
    {
      scanf("%d",&h); // シャッフル位置

      // シャッフルされる文字列を代入
      for(i=0;i<h;i++)
      {
	      y[i]=x[i];
      }
      y[i]='\0';

      // シャッフルしない文字列を代入
      for(i=h,j=0;i<strlen(x);i++)
      {
        z[j]=x[i];
        j++;
      }
      z[j]='\0';

      // シャッフルしない文字列にシャッフルする文字列を連結
      strcat(z,y);

      // zの文字列をxに移し替え
      for(i=0;i<=strlen(x);i++)
      {
        x[i]=z[i];
      }
      // zの最後を\0に変える
      memset(z, '\0', sizeof(z));
    }
    // // x表示
    // printf("%s\n",x);
      memcpy(ans[cnt], x, sizeof(x));
      cnt++;
      cnt_max = cnt;
  }

  for (cnt = 0; cnt < cnt_max; cnt++)
  {
    // 表示
    printf("%s\n",ans[cnt]);
  }
  
  return 0; 
}
