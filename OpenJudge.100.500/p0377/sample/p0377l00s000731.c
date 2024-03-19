#include <stdio.h>

int main(void)
{
  int a[4][13]={0};//これで全てゼロクリアされます
  int i, j, k, x, n;
  char m;

  scanf("%d", &n);

  for(k = 0; k < n; k++){
    scanf(" %c %d", &m, &x);//先頭にスペースを入れておくと、スペースや改行をパスできる
    if(m == 'S')
      a[0][x - 1] = 1;
    else if(m == 'H')
      a[1][x - 1] = 1;
    else if(m == 'C')
      a[2][x - 1] = 1;
    else if(m == 'D')
      a[3][x - 1] = 1;
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 13; j++){
      if(a[i][j] == 0){
	if(i == 0)
	  printf("S %d\n", j + 1);
	else if(i == 1)
	  printf("H %d\n", j + 1);
	else if(i == 2)
	  printf("C %d\n", j + 1);
	else if(i == 3)
	  printf("D %d\n", j + 1);
      }
    }
  }
  return 0;
}
