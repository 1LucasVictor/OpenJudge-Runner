#include<stdio.h>

int main(){
  int H[100], W[100], i, j, s,cnt=0, var;
  while(1){
    scanf("%d %d", &H[cnt], &W[cnt]);
    if(H[cnt]==0 || W[cnt]==0){
      break;
    }
    cnt++;
  }
  
  for(var=0;var<=cnt;var++){
    for(s=0;s<W[var];s++){
      printf("#");
    }
    printf("\n");
    for(j=0;j<H[var]-2;j++){
      printf("#");
      for(i=0;i<W[var]-2;i++){
        printf(".");
      }
      printf("#\n");
    }
    for(s=0;s<W[var];s++){
      printf("#");
    }
    printf("\n");
  }
  return 0;
}