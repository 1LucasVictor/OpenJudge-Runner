#include <stdio.h>
int main(){
  int data[4][14]; //0:S 1:H 2:C 3:D
  int n, i, num, a, b;
  char moji;

  for(a = 0; a < 4; a++) {
    for(b = 1; b <= 13; b++) {
      data[a][b] = b;
    }
  }

  scanf("%d", &n);
  for(i = 1; i <= n; i++) {
    scanf("%s%d",&moji,&num);
    if(moji == 'S') {
      data[0][num] = 0;
    } else if(moji == 'H') {
      data[1][num] = 0;
    } else if(moji == 'C') {
      data[2][num] = 0;
    } else if(moji == 'D') {
      data[3][num] = 0;
    }
  }

  for(a = 0; a < 4; a++) {
    for(b = 1; b <= 13; b++) {
      if(data[a][b] != 0) {
	if(a == 0) {
	  printf("S %d\n", data[a][b]);
	} else if(a == 1) {
	  printf("H %d\n", data[a][b]);
	} else if(a == 2) {
	  printf("C %d\n", data[a][b]);
	} else if(a == 3) {
	  printf("D %d\n", data[a][b]);
	}
      }
    }
  }

  return 0;
}