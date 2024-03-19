#include<stdio.h>

int main(int argc, char const *argv[]) {
  int n,num,i,j;
  int r[4][13]={0};
  char ch;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf(" %c %d", &ch, &num);
    switch (ch)  {
      case 'S':
        r[0][num-1]=num;
        break;
      case 'H':
        r[1][num-1]=num;
        break;
      case 'C':
        r[2][num-1]=num;
        break;
      case 'D':
        r[3][num-1]=num;
        break;
      default:
        break;
    }
  }
  //printf("\n");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
      if (r[i][j]==0) {
        switch (i)  {
          case 0:
            printf("S %d\n", j+1);
            break;
          case 1:
            printf("H %d\n", j+1);
            break;
          case 2:
            printf("C %d\n", j+1);
            break;
          case 3:
            printf("D %d\n", j+1);
            break;
          default:
            break;
        }
      }
    }
  }
  return 0;
}