#include <stdio.h>

int main(void)
{
  int t[4][14];
  int n, i,j,c;
  char m, d;
  for(i=0; i < 4; i++){
    for(j=0; j < 14; j++){
      t[i][j]=0;
    }
  }
 scanf("%d", &c);
  for(i = 0; i < c; i++){
    scanf("%c", &d);
    scanf("%c %d", &m, &n);
    if(m == 'S'){
      t[0][n] = 1;
    }
    else if(m == 'H'){
      t[1][n] = 1;
    }
    else if(m == 'C'){
      t[2][n] = 1;
    }
    else if(m == 'D'){
      t[3][n] = 1;
    }
  }
  for(j=1; j < 14; j++){
    if(t[0][j] != 1){
      printf("S %d\n", j);
    }
  }
   
 for(j=1; j < 14; j++){
    if(t[1][j] != 1){
      printf("H %d\n", j);
    }
  }
   
 for(j=1; j < 14; j++){
    if(t[2][j] != 1){
      printf("C %d\n", j);
    }
  }
   
 for(j=1; j < 14; j++){
    if(t[3][j] != 1){
      printf("D %d\n", j);
    }
  }
 return 0;
}
