#include<stdio.h>
int main(){
  int n,m,i,j,cards[4][14];
  char a;
 
  for(i = 0;i < 4;i++){
    for(j = 0;j < 14;j++){
      cards[i][j] = 0;
    }
  }
 
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    scanf("%c%c %d",&a, &a,&m);
      if(a == 'S'){
        cards[0][m] = 1;
      }
      else if(a == 'H'){
    cards[1][m] = 1;
      }
      else if(a == 'C'){
    cards[2][m] = 1;
      }
      else if(a == 'D'){
    cards[3][m] = 1;
      }
  }
  for(i = 0;i < 4;i++){
    for(j = 1;j <= 13;j++){
      if(i == 0 && cards[0][j] == 0){
        printf("S %d\n",j);
      }
      else if(i == 1 && cards[1][j] == 0){
    printf("H %d\n",j);
      }
      else if(i == 2 && cards[2][j] == 0){
    printf("C %d\n",j);
      }
      else if(i == 3 && cards[3][j] == 0){
    printf("D %d\n",j);
      }
    }
  }
  return 0;
}