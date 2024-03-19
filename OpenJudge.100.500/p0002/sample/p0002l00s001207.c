#include <stdio.h>
#include <math.h>

int main(void)
{
  unsigned int N;
  unsigned int i, j, k;
  unsigned int num;
  unsigned int data[1000][3];

  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &data[i][0]);
    scanf("%d", &data[i][1]);
    scanf("%d", &data[i][2]);
 }

  for (i = 0; i < N; i++){
    for (j = 0; j < 3; j++){
      num = 0;
      for (k = 0; k < 3; k++){
	if (k == j) continue;
	num += pow(data[i][k], 2);
      }
      if (num == pow(data[i][j], 2)){
	printf("YES\n");
	break;
      }
    }
    if (j == 3){
      printf("NO\n");
    }
  }

  return 0;
}