#include<stdio.h>
int main(){
  int H[3000], W[3000], i, l, k, n;
  for(i=0;;i++){
    scanf("%d %d", &H[i], &W[i]);
    if(H[i]==0 && W[i]==0){
      break;
    }
  }
  n = i-1;
  for(i=0;i<=n;i++){
    for(l=0;l<H[i];l++){
      for(k=0;k<W[i];k++){
        if(l==0 || l==H[i]-1 || k==0 || k==W[i]-1){
          printf("#");
        }else{
          printf(".");
        }
      }
      printf("\n");
    }
    printf("\n");
  }
    return 0;
}