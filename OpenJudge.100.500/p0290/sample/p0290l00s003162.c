#include <stdio.h>
#include<stdlib.h>
int main()
{
  int i,j,n,x;

  /* 自然数 */
  int *number;

  /* 判定フラグ */
  int flag = 0;
  scanf("%d",&n);
  number = (int *)malloc(sizeof(int) * n);

  /* 自然数の入力 */
  for(i=0;i<n;i++){
  scanf("%d", &number[i]);
}

  /* 素数かどうかを判定 */
  for(i=0;i<n;i++){
    flag = 0;
  for( j=2;j<number[i];++j) {
    if( number[i]%j==0 ) {
      flag = 1;
      break;
    }
  }
  if(flag==0){
    x++;
  }
}

  /* 判定結果を出力 */
printf("%d\n",x);

  return 0;
}

